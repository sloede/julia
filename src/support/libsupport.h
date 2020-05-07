// This file is a part of Julia. License is MIT: https://julialang.org/license

#ifndef JL_LIBSUPPORT_H
#define JL_LIBSUPPORT_H

#include "platform.h"

#include "bitvector.h"
#include "dirpath.h"
#include "dtypes.h"
#include "hashing.h"
#include "ios.h"
#include "ptrhash.h"
#include "strtod.h"
#include "timefuncs.h"
#include "utf8.h"
#include "utils.h"
#include <stdarg.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

JL_DLLEXPORT void libsupport_init(void);

#ifdef __cplusplus
}
#endif

#endif
