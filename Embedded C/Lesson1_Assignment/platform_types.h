#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
#include <stdbool.h>

#ifndef _bool
#define _bool unsigned char
#endif

#define CPU_TYPE CPU_TYPE_32
#define CPU_BIT_ORDER MSB_FIRST
#define CPU_BYTE_ORDER HIGH_BYTE_FIRST

#ifndef FALSE
#define FALSE  (boolean)false
#endif
#ifndef TRUE
#define TRUE   (boolean)true
#endif

typedef _Bool boolean;
typedef signed char  sint8_t;
typedef unsigned char uint8_t;
typedef signed short sint16_t;
typedef unsigned short uint16_t;
typedef signed long sint32_t;
typedef unsigned long uint32_t;
typedef signed long long sint64_t;
typedef unsigned long long uint64_t;
typedef float float32_t;
typedef double double64_t;

typedef volatile signed char vint8_t;
typedef volatile unsigned char vuint8_t;

typedef volatile signed short vint16_t;
typedef volatile unsigned short vuint16_t;

typedef volatile signed long vint32_t;
typedef volatile unsigned long vuint32_t;

typedef volatile signed long long  vint64_t;
typedef volatile unsigned long long vuint64_t;
#endif
