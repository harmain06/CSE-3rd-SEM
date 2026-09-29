#include <stdio.h>
void deletion(int arr[], int n) {
    int index;

    printf("Enter the deletion index: ");
    scanf("%d", &index);

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
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
        
    deletion(arr, n);

    return 0;
}
