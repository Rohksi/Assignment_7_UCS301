#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int x)
{
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void check(struct Node* root, int seen[10000], int* found)
{
    if(root == NULL || *found == 1)
        return;

    if(seen[root->data] == 1)
    {
        *found = 1;
        return;
    }
    seen[root->data] = 1;

    check(root->left, seen, found);
    check(root->right, seen, found);
}

int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(2);

    int seen[10000] = {0};
    int found = 0;

    check(root, seen, &found);

    if(found)
        printf("Duplicates Found\n");
    else
        printf("No Duplicates\n");

    return 0;
}