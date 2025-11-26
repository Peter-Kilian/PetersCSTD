/*
    peters_types.h --- primitive data types implementation

    Project URL: https://github.com/Peter-Kilian/PetersCSTD

    FEATURE OVERVIEW
    ================
    peters_types.h provides users with various primitive type aliases:

    - Renames unsigned int to u32
    - int to i32
    - float to f32

    and so on.
*/

#ifndef PETERS_TYPES_H
#define PETERS_TYPES_H

#include <stdint.h>
#include <stddef.h>

typedef int8_t    i8;
typedef uint8_t   u8;
typedef int16_t   i16;
typedef uint16_t  u16;
typedef int32_t   i32;
typedef uint32_t  u32;
typedef int64_t   i64;
typedef uint64_t  u64;

typedef float       f32;
typedef double      f64;
typedef long double f80;

typedef size_t    usize;
typedef ptrdiff_t isize;

#endif/*PETERS_TYPES_H*/
