#include "array.h"

Array *add(Array *a, Array *b)
{
    assert(a->size == b->size && a->dtype == b->dtype);
    Array *result = array_create(a->ndim, a->shape, a->dtype);

    if (a->dtype == FLOAT32)
    {
        float *a_data = (float *)a->data;
        float *b_data = (float *)b->data;
        float *r_data = (float *)result->data;
        for (size_t i = 0; i < a->size; i++)
        {
            r_data[i] = a_data[i] + b_data[i];
        }
    }
    return result;
}