set(CMAKE_C_FLAGS "")
add_definitions(-D__IMPL_CLANG_PORT_API__)
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/stdc/src/include)

aux_source_directory(misc MISC_SOURCES)
aux_source_directory(complex COMPLEX_SOURCES)
aux_source_directory(stdio STDIO_SOURCES)
aux_source_directory(stdlib STDLIB_SOURCES)
aux_source_directory(fenv FENV_SOURCES)

add_library_static(c
	${MISC_SOURCES}
	${COMPLEX_SOURCES}
	${STDIO_SOURCES}
	${STDLIB_SOURCES}
	${FENV_SOURCES}
)
