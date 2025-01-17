/* SPDX-License-Identifier: LGPL-3.0-or-later */
/*
 * Copyright(c) 2023 John Sanpe <sanpeqf@gmail.com>
 */

#ifndef _BFDEV_MHELPER_H_
#define _BFDEV_MHELPER_H_

#include <bfdev/config.h>

BFDEV_BEGIN_DECLS

#define BFDEV_MMAP_SPLIT0(fn, ...)
#define BFDEV_MMAP_SPLIT1(fn, arg, ...) fn(arg)
#define BFDEV_MMAP_SPLIT2(fn, arg, ...) fn(arg), BFDEV_MMAP_SPLIT1(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_SPLIT3(fn, arg, ...) fn(arg), BFDEV_MMAP_SPLIT2(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_SPLIT4(fn, arg, ...) fn(arg), BFDEV_MMAP_SPLIT3(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_SPLIT5(fn, arg, ...) fn(arg), BFDEV_MMAP_SPLIT4(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_SPLIT6(fn, arg, ...) fn(arg), BFDEV_MMAP_SPLIT5(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_SPLITN(n, fn, ...) BFDEV_MMAP_SPLIT##n(fn, ##__VA_ARGS__)

#define BFDEV_MMAP_ARG0(fn, ...)
#define BFDEV_MMAP_ARG1(fn, type, arg, ...) fn(type, arg)
#define BFDEV_MMAP_ARG2(fn, type, arg, ...) fn(type, arg), BFDEV_MMAP_ARG1(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_ARG3(fn, type, arg, ...) fn(type, arg), BFDEV_MMAP_ARG2(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_ARG4(fn, type, arg, ...) fn(type, arg), BFDEV_MMAP_ARG3(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_ARG5(fn, type, arg, ...) fn(type, arg), BFDEV_MMAP_ARG4(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_ARG6(fn, type, arg, ...) fn(type, arg), BFDEV_MMAP_ARG5(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_ARGN(n, fn, ...) MMAP_ARG##n(fn, ##__VA_ARGS__)

#define BFDEV_MMAP_DECL0(fn, ...)
#define BFDEV_MMAP_DECL1(fn, type, ...) fn(type, __arg1)
#define BFDEV_MMAP_DECL2(fn, type, ...) fn(type, __arg2), BFDEV_MMAP_DECL1(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_DECL3(fn, type, ...) fn(type, __arg3), BFDEV_MMAP_DECL2(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_DECL4(fn, type, ...) fn(type, __arg4), BFDEV_MMAP_DECL3(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_DECL5(fn, type, ...) fn(type, __arg5), BFDEV_MMAP_DECL4(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_DECL6(fn, type, ...) fn(type, __arg6), BFDEV_MMAP_DECL5(fn, ##__VA_ARGS__)
#define BFDEV_MMAP_DECLN(n, fn, ...) MMAP_DECL##n(fn, ##__VA_ARGS__)

#define BFDEV_MARGFN_DECL(type, arg) type arg
#define BFDEV_MARGFN_LONG(type, arg) long arg
#define BFDEV_MARGFN_ARGS(type, arg) arg
#define BFDEV_MARGFN_CAST(type, arg) (type) arg

BFDEV_END_DECLS

#endif  /* _BFDEV_MHELPER_H_ */
