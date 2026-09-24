//delete the node at the end of list

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

    first->next = second;
    second->next = third;
    third->next = NULL;

    node *temp = first;


    while(temp->next->next != NULL){
        temp=temp->next;
        

    }
    free(temp->next);
    temp->next=NULL;

    temp = first;

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    
    return 0;
}