#include <stdio.h>
#include <limits.h> 

int main() {
    int arr[5];
    printf("Enter the five numbers: ");
    
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;  // Initialize with minimum possible integer value
    int second = INT_MIN;  // Initialize with minimum possible integer value

    for(int i = 0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i<5; i++){
        if(max > arr[i] && arr[i] > second){
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no distinct second largest number.\n");
    } else {
        printf("Second largest number is: %d\n", second);
    }

    return 0;
}