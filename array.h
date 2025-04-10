#ifndef ARRAY_H
#define ARRAY_H

#include <stddef.h>

typedef enum
{
    FLOAT32,
    FLOAT64,
    INT32
} DType;

typedef struct
{
    void *data;
    DType dtype;
    size_t ndim;
    size_t *shape;
    size_t size;
} Array;

// Core functions
Array *array_create(size_t ndim, size_t *shape, DType dtype);
void array_free(Array *arr);

#endif
