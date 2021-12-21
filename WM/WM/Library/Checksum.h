#ifndef __CHECKSUM_H__
#define __CHECKSUM_H__

#include <stddef.h>
#include "Types.h"

uint32 Adler32(const void *data, size_t bytes);
uint32 Fletcher32(const void *data, size_t bytes);
uint32 Crc32(const void *data, size_t bytes);

#endif