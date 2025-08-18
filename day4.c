#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int arr1[], int arr2[], int m, int n) {
    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            swap(&arr1[i], &arr2[0]);

            int first = arr2[0];
            int k;
            for (k = 1; k < n && arr2[k] < first; k++) {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = first;
        }
    }
}

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter %d sorted elements for first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter %d sorted elements for second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, arr2, m, n);

    printf("\nAfter merging in-place:\n");
    printf("First array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr1[i]);

    printf("\nSecond array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
