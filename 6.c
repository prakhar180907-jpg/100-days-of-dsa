// Function to find the missing number
int MissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;  // Sum of first n natural numbers
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    return total - sum;
}

// Driver code
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // Full size (not array size)

    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", MissingNumber(arr, n));
    return 0;
}