#include <stdio.h>
void bubblesort(int arr[], int n) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Traversal: print the sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100], size;

    printf("Enter the Size of Array: ");
    scanf("%d", &size);


    printf("Enter the Elements of Array: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    bubblesort(arr, n);

    return 0;
}
