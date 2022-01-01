#ifndef __URI_ENCODE_C_H__
#define __URI_ENCODE_C_H__

#include <stdlib.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

size_t uri_encode (const char *src, size_t src_len, char *dst, size_t dst_len);
size_t uri_decode(const char* src, char* dst, size_t dst_len);

#ifdef __cplusplus
}
#endif

#endif // __URI_ENCODE_C_H__
