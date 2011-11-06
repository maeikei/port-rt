set(ASSABLER_COUNTER 0 )
macro(compile_asm prefix src )
	GET_FILENAME_COMPONENT(obj ${src} NAME_WE)
	set(CUST_TARGET ${prefix}_${ASSABLER_COUNTER}_ASSABLER)
	ADD_CUSTOM_TARGET (${CUST_TARGET} ALL)
	ADD_CUSTOM_COMMAND (
		TARGET	${CUST_TARGET}
		COMMAND   ${CMAKE_ASM_COMPILER} -o ${obj}.o ${ARGN} -c ${src}
	)
	math( EXPR ASSABLER_COUNTER "${ASSABLER_COUNTER} + 1" )
endmacro(compile_asm)

macro(add_library_static libname )
	add_library(${libname}-static STATIC ${ARGN} )
	SET_TARGET_PROPERTIES(${libname}-static PROPERTIES OUTPUT_NAME "${libname}")
	SET_TARGET_PROPERTIES(${libname}-static PROPERTIES PREFIX "lib")
	SET_TARGET_PROPERTIES(${libname}-static PROPERTIES SUFFIX ".a")
	install(TARGETS ${libname}-static ARCHIVE DESTINATION ${INTSTALL_TOP}/lib)
endmacro(add_library_static)

macro(add_library_shared libname )
	add_library(${libname} SHARED ${ARGN} )
	SET_TARGET_PROPERTIES(${libname} PROPERTIES OUTPUT_NAME "${libname}")
	SET_TARGET_PROPERTIES(${libname} PROPERTIES PREFIX "lib")
	SET_TARGET_PROPERTIES(${libname} PROPERTIES SUFFIX ".so")
	install(TARGETS ${libname} LIBRARY DESTINATION ${INTSTALL_TOP}/lib)
endmacro(add_library_shared)

