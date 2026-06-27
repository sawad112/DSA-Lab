#include <stdio.h>
#include <stdlib.h>
int main(){
    int *array;
    int n=5;

    array = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        array[i] = i+1;
    }
    for(int i=0; i<n; i++){
        printf("%d", array[i]);
    }
    free(array);
    return 0;
}