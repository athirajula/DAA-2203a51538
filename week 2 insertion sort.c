#include <stdio.h>
void insertionSortDescending(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int hotelPrices[100];
    int size; 

    printf("Enter the number of hotel prices: ");
    scanf("%d", &size);

    printf("Enter the hotel prices:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &hotelPrices[i]);
    }
    insertionSortDescending(hotelPrices, size);

    printf("After Sorting Hotel Prices:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", hotelPrices[i]);
    }

    return 0;
}