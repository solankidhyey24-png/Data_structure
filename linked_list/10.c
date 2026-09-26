//delete node after a given value

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

    int value = 300;
    node *temp = first;
    
    while(temp != NULL && temp->data != value){
        temp=temp->next;
    };
    if(temp != NULL && temp->next != NULL){
        node *del = temp->next;
        temp->next = del->next;
        free(del);
    }

    else{
        printf("there is node after the given value\n");

    };
    temp = first;

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }

    return 0;
}