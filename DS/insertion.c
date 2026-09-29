#include <stdio.h>
void insertion(int arr[], int n) {
    int index, new;

    printf("Enter the value of insertion index: ");
    scanf("%d", &index);

    printf("Enter the value of new Element: ");
    scanf("%d", &new);

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = new;
    n++;

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
        

    insertion(arr, n);

    return 0;
}
