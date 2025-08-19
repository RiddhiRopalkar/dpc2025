#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[n];
    int j = 0;

    int max = arr[n-1];
    leaders[j++] = max;

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            leaders[j++] = arr[i];
        }
    }

    printf("Leaders: ");
    for (int i = j-1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
