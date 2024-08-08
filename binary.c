#include <stdio.h>


int binarySearch(float arr[], int size, float target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  
        }
        if (arr[mid] < target) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }

    return -1;  
}

int main() {
    
    float salaries[] = {30000.00, 35000.00, 40000.00, 45000.00, 50000.00};
    int size = sizeof(salaries) / sizeof(salaries[0]);

 
    float targetSalary;
    printf("Enter the salary to search for: ");
    scanf("%f", &targetSalary);

    int result = binarySearch(salaries, size, targetSalary);

    if (result != -1) {
        printf("Salary %.2f found at index %d.\n", targetSalary, result);
    } else {
        printf("Salary %.2f not found.\n", targetSalary);
    }

    return 0;
}

