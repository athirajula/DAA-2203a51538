#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int size) {
    int i, j, min_idx;

    for (i = 0; i < size-1; i++) {
        min_idx = i;
        for (j = i+1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int productIDs[100];
    int size;  

    printf("Enter the number of product IDs: ");
    scanf("%d", &size);

    printf("Enter the product IDs:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &productIDs[i]);
    }
    selectionSort(productIDs, size);
    printf("After Sorting Product IDs:\n");
    for (int i = 0; i < size; i++) {
        if (i != 0) {
            printf(",");
        }
        printf("%d", productIDs[i]);
    }
    printf("\n");

    return 0;
}