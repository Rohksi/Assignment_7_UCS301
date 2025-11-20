#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head   = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third  = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;    head->next = second;
    second->data = 2;  second->next = third;
    third->data = 3;   third->next = fourth;
    fourth->data = 4;  fourth->next = second;   // cycle

    struct Node* temp = head;
    struct Node* seen[1005] = {0};
    int i = 0;
    int hasCycle = 0;

    while(temp != NULL) {
        int j;
        for(j = 0; j < i; j++) {
            if(seen[j] == temp) {
                hasCycle = 1;
                break;
            }
        }
        if(hasCycle) break;

        seen[i] = temp;
        i++;
        temp = temp->next;
    }

    if(hasCycle)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}