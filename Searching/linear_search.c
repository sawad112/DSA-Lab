#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10] = {11,15,20,53,54,48,5,9,2,50};
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    for(int i=0;i<10;i++){
        if(x== arr[i])
            printf("Index is %d\n",i);
            return 0;
    }
    printf("Element is not found");
    return 0;
}