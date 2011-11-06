include_directories(${CMAKE_SOURCE_DIR}/stdc/include)
include_directories(${CMAKE_SOURCE_DIR}/stdc/src/include)

set( SOURCES
	assert.c
)
aux_source_directory(complex COMPLEX_SOURCES)
aux_source_directory(stdio STDIO_SOURCES)
aux_source_directory(stdlib STDLIB_SOURCES)

add_library_static(c
	${SOURCES} 
	${COMPLEX_SOURCES}
	${STDIO_SOURCES}
	${STDLIB_SOURCES}
)
