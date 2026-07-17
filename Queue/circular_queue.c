#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char (*queue)[50];

int front = -1;
int rear = -1;
int size;

void enqueue()
{
    char value[50];

    if ((rear + 1) % size == front)
    {
        printf("Circular Queue is Full\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%s", value);

        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        strcpy(queue[rear], value);
        printf("%s inserted\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Circular Queue is Empty\n");
    }
    else
    {
        printf("%s deleted\n", queue[front]);

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Circular Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");
        i = front;

        while (1)
        {
            printf("%s ", queue[i]);

            if (i ==rear)
                break;
            i = (i + 1)%size;
        }
        printf("\n");
    }
}


int main()
{
    int choice;

    printf("Enter circular queue size: ");
    scanf("%d", &size);
    queue = malloc(size * sizeof(*queue));

    while(1)
    {
        printf("\n--- Circular Queue Menu ---");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                free(queue);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
