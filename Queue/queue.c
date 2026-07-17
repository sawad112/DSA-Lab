#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char (*queue)[50]; //Queue for both words and numbers

int front = -1;
int rear = -1;
int size;

void enqueue()
{
    char value[50];

    if((rear + 1) % size == front)
    {
        printf("Queue Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%s", value);

    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1)% size;
    }

    strcpy(queue[rear], value);
    printf("Inserted %s\n", value);
}
void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("%s deleted\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");

        for(i = front; i <= rear; i++)
        {
            printf("%s ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("Enter queue size: ");
    scanf("%d", &size);
    queue = malloc(size * sizeof(*queue));

    while(1)
    {
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
