#include <stdio.h>
void update(int arr[], int n) {
    int index, new;

    printf("Enter the index to update: ");
    scanf("%d", &index);

    printf("Enter the new element: ");
    scanf("%d", &new);

    arr[index] = new;

    for(int i = 0; i < n; i++) {
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
    }
    update(arr, n);

    return 0;
}
