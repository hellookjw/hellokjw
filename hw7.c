#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] ^= arr2[i] ^= arr1[i] ^= arr2[i];
    }
}

void printArray(const char *label, int *arr, int size) {
    printf("%s: ", label);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {7, 8, 9, 10, 11, 12};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printArray("arr1", arr1, size);
    printArray("arr2", arr2, size);

    swapArrays(arr1, arr2, size);

    printf("after swap\n");
    printArray("arr1", arr1, size);
    printArray("arr2", arr2, size);

    return 0;
}
