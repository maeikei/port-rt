cmake_minimum_required(VERSION 2.8)
project(port-rt)

enable_language(ASM)

set(INTSTALL_TOP "usr")
include(Common.cmake)

message( STATUS "ARCH_TRIPLE:			" ${ARCH_TRIPLE} )
message( STATUS "CMAKE_C_COMPILER:		" ${CMAKE_C_COMPILER} )
message( STATUS "CMAKE_CXX_COMPILER:		" ${CMAKE_CXX_COMPILER} )
message( STATUS "CMAKE_AS:			" ${CMAKE_AS} )
message( STATUS "CMAKE_AR:			" ${CMAKE_AR} )
message( STATUS "CMAKE_LD:			" ${CMAKE_LD} )
message( STATUS "CMAKE_ASM_COMPILER:		" ${CMAKE_ASM_COMPILER} )


message( STATUS "CMAKE_ASM_SOURCE_FILE_EXTENSIONS:		" ${CMAKE_ASM_SOURCE_FILE_EXTENSIONS} )
message( STATUS "CMAKE_ASM_COMPILE_OBJECT:			" ${CMAKE_ASM_COMPILE_OBJECT} )



set(ARCH_TRIPLE "i686-pc-linux-gnu")

if( "i686-pc-linux-gnu" STREQUAL ${ARCH_TRIPLE} )
	set( TARGET_ARCH x86 )
	set( TARGET_OS linux )
	set( CMAKE_SYSTEM_NAME Linux )
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__CLANG_PORT_IMPL_X86")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__CLANG_PORT_IMPL_LINUX__")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__CLANG_PORT_IMPL_X86")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__CLANG_PORT_IMPL_LINUX__")
elseif( "i686-pc-mingw32" STREQUAL ${ARCH_TRIPLE} )
	set( TARGET_ARCH x86 )
	set( TARGET_OS Windows )
	set( CMAKE_SYSTEM_NAME windows )
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__CLANG_PORT_IMPL_X86")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__CLANG_PORT_IMPL_WIN32__")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__CLANG_PORT_IMPL_X86")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__CLANG_PORT_IMPL_WIN32__")
endif()

message( STATUS "TARGET_ARCH:			" ${TARGET_ARCH} )


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -nostdinc")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -nostdinc -nostdinc++ ")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -nostdlib ")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -nostdlib ")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -nostdlib ")
SET(CMAKE_SHARED_LIBRARY_CREATE_C_FLAGS "-shared")



#compile_asm( linker ${CMAKE_SOURCE_DIR}/linker/arch/${TARGET_ARCH}/begin.S )
#compile_asm( c ${CMAKE_SOURCE_DIR}/libc/arch-${TARGET_ARCH}/bionic/crtbegin_dynamic.S -I ${CMAKE_SOURCE_DIR}/libc/private )
#compile_asm( c ${CMAKE_SOURCE_DIR}/libc/arch-${TARGET_ARCH}/bionic/crtbegin_static.S -I ${CMAKE_SOURCE_DIR}/libc/private )
#compile_asm( c ${CMAKE_SOURCE_DIR}/libc/arch-${TARGET_ARCH}/bionic/crtend.S -I ${CMAKE_SOURCE_DIR}/libc/private )
#compile_asm( c ${CMAKE_SOURCE_DIR}/libc/arch-${TARGET_ARCH}/bionic/crtbegin_so.S -I ${CMAKE_SOURCE_DIR}/libc/private )
#compile_asm( c ${CMAKE_SOURCE_DIR}/libc/arch-${TARGET_ARCH}/bionic/crtend_so.S -I ${CMAKE_SOURCE_DIR}/libc/private )

#FILE(GLOB OBJECTS ${CMAKE_CURRENT_BINARY_DIR}/*.o)
#install(FILES ${OBJECTS} DESTINATION ${INTSTALL_TOP}/lib)

add_subdirectory(stdc)
