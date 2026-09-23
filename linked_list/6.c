#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

int main(){
    node *first = malloc(sizeof(node));
    first->data = 10;

    node *second = malloc(sizeof(node));
    second->data = 20;

    node *third = malloc(sizeof(node));
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;


    node *temp = first;
    first=first->next;
    free(temp);

    temp = first;
    


    while(temp != NULL){
        printf("%d\n", temp->data);
        temp=temp->next;

    };

    
    return 0;

}