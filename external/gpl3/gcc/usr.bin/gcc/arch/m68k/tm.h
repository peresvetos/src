/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: NetBSD: mknative-gcc,v 1.87 2016/03/17 23:41:21 mrg Exp  */
/* Generated from: NetBSD: mknative.common,v 1.11 2014/02/17 21:39:43 christos Exp  */

#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (m68020)
#ifndef LIBC_GLIBC
# define LIBC_GLIBC 1
#endif
#ifndef LIBC_UCLIBC
# define LIBC_UCLIBC 2
#endif
#ifndef LIBC_BIONIC
# define LIBC_BIONIC 3
#endif
#ifndef NETBSD_ENABLE_PTHREADS
# define NETBSD_ENABLE_PTHREADS
#endif
#ifndef MOTOROLA
# define MOTOROLA 1
#endif
#ifndef USE_GAS
# define USE_GAS 1
#endif
#ifndef CHAR_FAST8
# define CHAR_FAST8 1
#endif
#ifndef SHORT_FAST16
# define SHORT_FAST16 1
#endif
#ifdef IN_GCC
# include "options.h"
# include "insn-constants.h"
# include "config/m68k/m68k.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/netbsd.h"
# include "config/netbsd-stdint.h"
# include "config/netbsd-elf.h"
# include "config/m68k/netbsd-elf.h"
# include "config/initfini-array.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-flags.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE
# include "insn-modes.h"
#endif
#if defined IN_GCC && defined GENERATOR_FILE && !defined BITS_PER_UNIT
#include "machmode.h"
#endif
# include "defaults.h"
#endif /* GCC_TM_H */