#include "array.h"

double dot(Array *a, Array *b)
{
    assert(a->size == b->size && a->dtype == FLOAT64 && b->dtype == FLOAT64);
    double *a_data = (double *)a->data;
    double *b_data = (double *)b->data;
    double result = 0;

    for (size_t i = 0; i < a->size; i++)
    {
        result += a_data[i] * b_data[i];
    }
    return result;
}