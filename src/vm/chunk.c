#include "chunk.h"

EhlasChunk chunk;

void EhlasChunk_init(EhlasChunk *self)
{
	self->code = malloc(EHLAS_CHUNK_CODE_SIZE *
	 EHLAS_CHUNK_CODE_COUNT);
}
void EhlasChunk_destroy(EhlasChunk *self)
{
	free(self->code);
}