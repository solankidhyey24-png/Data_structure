#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node *next;

} node;
int main(){
    node *first = malloc(sizeof(node));
    first->data = 10;
    first->next = NULL;

    node *second = malloc(sizeof(node));
    second->data = 20;
    second->next = NULL;

    node *third = malloc(sizeof(node));
    third->data = 30;
    third->next = NULL;

    first->next = second;
    second->next=third;

    node *newnode = malloc(sizeof(node));
    newnode->data=15;
    newnode->next=NULL;


    newnode->next=second;
    first->next=newnode;

    node *temp = first;
    while(temp!=NULL){
        printf("%d\n", temp->data);;
        temp=temp->next;
        
        
                                    
    }

    temp = first;
    
    return 0;
}


