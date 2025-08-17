#include <stdio.h>

int findDuplicate(int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];


    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);


    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {
    int n;
    printf("Enter n (array will have n+1 elements): ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements (values between 1 and %d):\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = findDuplicate(arr, n);
    printf("Duplicate number: %d\n", duplicate);

    return 0;
}
