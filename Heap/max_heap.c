#include <stdio.h>
#define SIZE 100

int heap[SIZE];
int n = 0;


void insert(int value)
{
    n++;
    int i = n;

    heap[i] = value;

    // Heapify Up
    while(i > 1 && heap[i] > heap[i/2])
    {
        int temp = heap[i];
        heap[i] = heap[i/2];
        heap[i/2] = temp;

        i = i/2;
    }
}


void delete()
{
    if(n == 0)
    {
        printf("Heap Empty\n");
        return;
    }

    heap[1] = heap[n];
    n--;

    int i = 1;

    // Heapify Down
    while(1){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left <= n && heap[left] > heap[largest])
            largest = left;

        if(right <= n && heap[right] > heap[largest])
            largest = right;

        if(largest == i)
            break;

        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        i = largest;
    }
}

void display(){
    for(int i=1;i<=n;i++)
        printf("%d ",heap[i]);
}

int main(){
    insert(50);
    insert(30);
    insert(70);
    insert(10);
    insert(90);

    printf("Max Heap: ");
    display();

    return 0;
}