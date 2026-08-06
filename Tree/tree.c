#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *child;
    struct Node *sibling;
};

// Create node
struct Node* createNode(int value){
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->child = NULL;
    newNode->sibling = NULL;

    return newNode;
}

// Display tree
void display(struct Node *root, int level){
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
        printf("  ");

    printf("%d\n", root->data);

    display(root->child, level + 1);
    display(root->sibling, level);
}

int main(){
    // Creating normal tree
    struct Node *root = createNode(1);

    root->child = createNode(2);
    root->child->sibling = createNode(3);
    root->child->sibling->sibling = createNode(4);

    root->child->child = createNode(5);
    root->child->child->sibling = createNode(6);

    // Display tree
    display(root, 0);

    return 0;
}