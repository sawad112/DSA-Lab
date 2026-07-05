#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int size;
    int *arr;
}Stack;

Stack *createStack(int size){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack -> top =-1;
    stack -> size = size;
    stack -> arr = (int *)malloc(sizeof(int)*size);
    return stack;
}
void push(Stack *stack, int n){
    if(stack -> top == stack -> size -1){
        printf("Stack Overflow!!!");
    }
    else{
        stack -> top++;
        stack -> arr[stack -> top] =n ;
        printf("%d is pushed.\n",n);
    }
}

void pop(Stack *stack){
    if(stack -> top == -1){
        printf("Stack Underflow!!!\n");
    }
    else{
        printf("%d is popped.\n",stack-> arr[stack -> top]);
        stack -> top--;

    }
}

int main(){
    Stack *s1 =createStack(5);
    push(s1,12);
    push(s1,15);
    pop(s1);
    pop(s1);
    pop(s1);
    return 0;
}
