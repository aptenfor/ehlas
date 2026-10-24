#ifndef EHLAS_CHUNK_H
#define EHLAS_CHUNK_H

#include "common.h"

#define EHLAS_CHUNK_CODE_SIZE 6
#define EHLAS_CHUNK_CODE_COUNT 1000000
typedef enum EhlasOpCode
{
	EHLAS_OP_LDI,
} EhlasOpCode;
typedef struct EhlasChunk
{
	char *code;
} EhlasChunk;
void EhlasChunk_init(EhlasChunk *self);
void EhlasChunk_destroy(EhlasChunk *self);

extern EhlasChunk chunk; 
#endif