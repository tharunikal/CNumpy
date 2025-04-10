#include "array.h"
#include <stdlib.h>
#include <string.h>

Array *array_create(size_t ndim, size_t *shape, DType dtype)
{
    Array *arr = malloc(sizeof(Array));
    arr->ndim = ndim;
    arr->shape = malloc(ndim * sizeof(size_t));
    memcpy(arr->shape, shape, ndim * sizeof(size_t));

    arr->size = 1;
    for (size_t i = 0; i < ndim; i++)
    {
        arr->size *= shape[i];
    }

    size_t elem_size = dtype == FLOAT32 ? sizeof(float) : dtype == FLOAT64 ? sizeof(double)
                                                                           : sizeof(int);
    arr->data = calloc(arr->size, elem_size);
    arr->dtype = dtype;

    return arr;
}

void array_free(Array *arr)
{
    free(arr->data);
    free(arr->shape);
    free(arr);
}