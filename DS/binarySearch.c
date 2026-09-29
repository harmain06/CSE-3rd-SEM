#include <stdio.h>
void binary_search(int arr[], int size, int key){
    int low = 0, high = size - 1, mid;
    int i, j, temp;
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            printf("\nFound by binary search at position %d\n", mid);
            return;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("\nKey value not found by binary search\n");
}


int main(){
    int size, i = 0, key;
    printf("Enter size of element: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array: ");
    for(i ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
  
     printf("Enter key to search: ");
    scanf("%d", &key);
  
binary_search(arr , size , key);
return 0;
}
