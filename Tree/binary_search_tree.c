#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *l,*r;
}node;

node* new(int x){
    node *n=malloc(sizeof(node));
    n->data=x;
    n->l=n->r=NULL;
    return n;
}

node* insert(node *root,int x){
    if(root==NULL)
        return new(x);

    if(x<root->data)
        root->l=insert(root->l,x);
    else
        root->r=insert(root->r,x);

    return root;
}

void inorder(node *root){
    if(root)
    {
        inorder(root->l);
        printf("%d ",root->data);
        inorder(root->r);
    }
}

void preorder(node *root){
    if(root)
    {
        printf("%d ",root->data);
        preorder(root->l);
        preorder(root->r);
    }
}

void postorder(node *root){
    if(root)
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d ",root->data);
    }
}

int search(node *root,int x){
    if(root==NULL)
        return 0;

    if(root->data==x)
        return 1;

    if(x<root->data)
        return search(root->l,x);
    else
        return search(root->r,x);
}

int main(){
    node *root=NULL;
    int a[]={50,30,70,20,40,60,80};
    int n=7,x;

    for(int i=0;i<n;i++)
        root=insert(root,a[i]);

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    printf("\nSearch: ");
    scanf("%d",&x);

    if(search(root,x))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
