#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int cmp_desc(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, size, sizeof(int), cmp_asc);
    print_array(arr, size);

    qsort(arr, size, sizeof(int), cmp_desc);
    print_array(arr, size);

    return 0;
}