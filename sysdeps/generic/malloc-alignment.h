   Copyright (C) 2017-2023 Free Software Foundation, Inc.
/* Define MALLOC_ALIGNMENT for malloc.  Generic version.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _GENERIC_MALLOC_ALIGNMENT_H
#define _GENERIC_MALLOC_ALIGNMENT_H

/* MALLOC_ALIGNMENT is the minimum alignment for malloc'ed chunks.  It
   must be a power of two at least 2 * SIZE_SZ, even on machines for
   which smaller alignments would suffice. It may be defined as larger
   than this though. Note however that code and data structures are
   optimized for the case of 8-byte alignment.  
   MALLOC_ALIGNMENT 是 malloc 块的最小对齐。 它必须是至少 2 * SIZE_SZ 的 2 的幂，即使在较小对齐就足够的机器上也是如此。 它可能被定义为比这更大。 但是请注意，代码和数据结构针对 8 字节对齐的情况进行了优化
   MALLOC_ALIGNMENT在32位下是8个字节，64位下是16个字节的无符号整数 */
#define MALLOC_ALIGNMENT (2 * SIZE_SZ < __alignof__ (long double) \
			  ? __alignof__ (long double) : 2 * SIZE_SZ)


#endif /* !defined(_GENERIC_MALLOC_ALIGNMENT_H) */
