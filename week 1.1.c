#include <stdio.h>

void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n;
    int choice;
    
    printf("Enter the number of destinations: ");
    scanf("%d", &n);
    
    int times[n];
    
    printf("Enter time to reach each destination:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }

    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &choice);

    if (choice == 1) {
        sortAscending(times, n);
    } else if (choice == 2) {
        sortDescending(times, n);
    } else {
        printf("Invalid choice\n");
        return 1; 
    }

    printf("Sorted times to reach destination:\n");
    displayArray(times, n);

    return 0;
}
