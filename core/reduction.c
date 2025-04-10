#include "array.h"

double sum(Array *arr)
{
    double total = 0;
    if (arr->dtype == FLOAT64)
    {
        double *data = (double *)arr->data;
        for (size_t i = 0; i < arr->size; i++)
        {
            total += data[i];
        }
    }
    return total;
}