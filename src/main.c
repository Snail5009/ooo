#include <stdio.h>

#include <cocktail_sort.h>

int main(void) {
    int values[] = {42, 17, 8, 99, 23, 5, 71, 60, 1, 33};
    int size = sizeof(values) / sizeof(values[0]);

    printf("Before sorting:\n");
    print_array(values, size);

    cocktail_shaker_sort(values, size);

    printf("\nAfter sorting:\n");
    print_array(values, size);

    return 0;
}
