#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    int height;
    struct Node *left;
    struct Node *right;
};


int height(struct Node *n){
    if(n == NULL)
        return 0;

    return n->height;
}

int max(int a, int b){
    return (a > b) ? a : b;
}


struct Node* createNode(int value){
    struct Node *node = malloc(sizeof(struct Node));
    node->data = value;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;

    return node;
}

//Right Rotation (LL Case)
struct Node* rightRotate(struct Node *y){
    struct Node *x = y->left;
    struct Node *temp = x->right;

    x->right= y;
    y->left =temp;

    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;
    return x;
}


//Left Rotation (RR Case)
struct Node* leftRotate(struct Node *x){
    struct Node *y = x->right;
    struct Node *temp = y->left;

    y->left = x;
    x->right = temp;

    x->height = max(height(x->left),
                    height(x->right)) + 1;

    y->height = max(height(y->left),
                    height(y->right)) + 1;

    return y;
}


void preorder(struct Node *root){
    if(root != NULL){
        printf("%d ",root->data);

        preorder(root->left);
        preorder(root->right);
    }
}


int main(){
    struct Node *root = createNode(30);

    root->left = createNode(20);
    root->left->left = createNode(10);

    printf("Before Rotation: ");
    preorder(root);

    root = rightRotate(root);

    printf("\nAfter Right Rotation: ");
    preorder(root);
    return 0;
}