#include <stdio.h>

void ft_print(const int *arr, int size, int order) {
    int i;
    if (order)
        for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
    else
        for (i = size-1; i > -1; i--)
            printf("%d ", arr[i]);
    printf("\n");
}