
#ifndef __UTIL_H
#define __UTIL_H

#define SHR(x,c) ((x) >> (c))
#define ROTR32(x,c) (((x) >> (c)) | ((x) << (32 - (c))))
#define ROTR64(x,c) (((x) >> (c)) | ((x) << (64 - (c))))


#endif

