#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[6] = {11,15,20,53,54,48};
    int low = 0,high = 5;
    int mid = ceil((low + high)/2);
    int value;

    printf("Enter a value: ");
    scanf("%d", &value);
    
    while(low <= high){
        mid = ceil((low + high)/2);
        if(arr[mid] == value){
            printf("Index is %d", mid);
            return 0;
        }
        else if( value > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    printf("%d is not found", value);
    return 0;
}
