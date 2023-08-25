#pragma once

#include "ilogxi/ilogxi.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <assert.h>

inline intmax_t clamp(intmax_t val, intmax_t lo, intmax_t hi)
{
      assert(!(hi < lo));

      return (((val < lo) ? lo : hi) < val) ? hi : val;
}

inline uint8_t strlenid(int32_t i, uint32_t base)
{
	return ilogxid(i, base) + 1;
}

inline uint8_t strleniq(int64_t i, uint64_t base)
{
	return ilogxiq(i, base) + 1;
}

#ifdef __cplusplus
}
#endif
