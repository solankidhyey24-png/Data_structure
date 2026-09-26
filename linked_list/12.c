// searching a node in a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

int main(){
    node *first = malloc(sizeof(node));
    first->data = 100;

    node *second = malloc(sizeof(node));
    second->data = 200;

    node *third = malloc(sizeof(node));
    third->data = 300;

    node *fourth = malloc(sizeof(node));
    fourth->data = 400;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    int value = 400;
    node *temp = first;
    int pos = 1;
    while (temp != NULL && temp->data != value){
        temp=temp->next;
        pos++;

    }
    if(temp != NULL){
        printf("Node found at position %d\n", pos);
    }
    else{
        printf("Node not found\n");
    }
    return 0;
}