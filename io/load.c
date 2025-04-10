#include "array.h"
#include <stdio.h>

Array *load_txt(const char *filename, DType dtype)
{
    FILE *file = fopen(filename, "r");
    // Simple implementation for 1D array
    size_t size = 0;
    fscanf(file, "%zu", &size);

    size_t shape[] = {size};
    Array *arr = array_create(1, shape, dtype);

    if (dtype == FLOAT32)
    {
        float *data = (float *)arr->data;
        for (size_t i = 0; i < size; i++)
        {
            fscanf(file, "%f", &data[i]);
        }
    }
    fclose(file);
    return arr;
}