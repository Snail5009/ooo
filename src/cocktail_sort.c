#include <stdbool.h>
#include <stdio.h>

#include <cocktail_sort.h>

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void swp(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void cocktail_shaker_sort(int arr[], int size) {
    int i;
    int start = 0;
    int end = size - 1;
    bool swapped = true;

    while (start < end)
    {
        for (i = start; i < end; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swp(&arr[i], &arr[i + 1]);
            }
        }
        end--;
        for (i = end; i > start; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swp(&arr[i], &arr[i - 1]);
            }
        }
        start++;
    }
}
