#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Creating nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    // Adding data and connect nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Displaying linked list
    struct Node *temp = head;

    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp=temp->next;
    }

    printf("NULL");

    //Freeing memory
    free(head);
    free(second);
    free(third);

    return 0;
}