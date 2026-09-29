#include <stdio.h>
void traversal(int arr[], int n) {
    printf("The Elements are: ");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
int main(){
  int arr[100], size;

    printf("Enter the Size of Array: ");
    scanf("%d", &size);

    printf("Enter the Elements of Array: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    traversal(arr, size);
}
