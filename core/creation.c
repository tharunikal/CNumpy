#include "cnumpy.h"

Array *zeros(size_t ndim, size_t *shape, DType dtype)
{
    return array_create(ndim, shape, dtype);
}

Array *arange(int start, int stop, int step, DType dtype)
{
    size_t size = (stop - start) / step;
    size_t shape[] = {size};
    Array *arr = array_create(1, shape, dtype);

    if (dtype == INT32)
    {
        int *data = (int *)arr->data;
        for (size_t i = 0; i < size; i++)
        {
            data[i] = start + i * step;
        }
    }
    return arr;
}