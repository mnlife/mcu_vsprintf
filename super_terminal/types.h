#ifndef TYPES_H_
#define TYPES_H_

/* sysv */
typedef unsigned char       unchar;
typedef unsigned int        ushort;
typedef unsigned long       uint;
typedef unsigned long       ulong;
typedef unsigned char       uint8_t;
typedef signed char         s8;
typedef unsigned char       u8;
typedef signed int          s16;
typedef unsigned int        u16;
typedef signed long         s32;
typedef unsigned long       u32;
typedef unsigned long       phys_addr_t;
typedef unsigned long       phys_size_t;
typedef signed long long    s64;
typedef unsigned long long  u64;
extern const unsigned char _ctype[];
#define noinline __attribute__((noinline))

#endif /* TYPES_H_ */
