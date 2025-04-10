#include "array.h"
#include <stdio.h>

void save_txt(Array *arr, const char *filename)
{
    FILE *file = fopen(filename, "w");
    fprintf(file, "%zu\n", arr->size); // Write size first

    if (arr->dtype == FLOAT32)
    {
        float *data = (float *)arr->data;
        for (size_t i = 0; i < arr->size; i++)
        {
            fprintf(file, "%.6f\n", data[i]);
        }
    }
    fclose(file);
}