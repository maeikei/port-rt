#ifndef __CLANG_PORT_H__
/*
 * _clang_port.h
 *
 *
 */
#define __CLANG_PORT_H__
#define CLANG_PORT_VERSION           0.0
#define CLANG_PORT_MAJOR_VERSION     0
#define CLANG_PORT_MINOR_VERSION     0
#define CLANG_PORT_PATCHLEVEL        0
#define CLANG_PORT_DECL(x) __clang_port_##x
#define CLANG_PORT_CALL(x) __clang_port_##x
#define CLANG_PORT_REF(x) __clang_port_##x

#if defined(__cplusplus)
# define	__BEGIN_DECLS		extern "C" {
# define	__END_DECLS		}
#else
# define	__BEGIN_DECLS
# define	__END_DECLS
#endif

/*
 Not supported now
 */
#define _Static_assert
#define _Noreturn 



// macro for function point
#define CLANG_PORT_FPTR_TYPE(x) ( * __clang_port_func_ptr_type_##x )
#define CLANG_PORT_FPTR_VAR(x) __clang_port_func_ptr_type_##x __clang_port_func_ptr_var_##x
#define CLANG_PORT_CALL_FPTR(x) __clang_port_func_ptr_var_##x
#define CLANG_BUILTIN_CALL(x) __builtin_##x
#define CLANG_PORT_INLINE static inline 
#define CLANG_PORT_ALWAYS_INLINE __attribute__((__always_inline__, __nodebug__)) 
#define CLANG_LIB_BUILTIN 


#define CLANG_STRUCT(x) ( * __clang_port_struct_type_##x )



#define __LIBC_HIDDEN__							\
__attribute__ ((visibility ("hidden")))


#endif /* __CLANG_PORT_H__ */
