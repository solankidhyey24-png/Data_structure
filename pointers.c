#include<stdio.h>
int main(){
    //int x = 10;
    // int *ptr = &x;
    // printf("value of x = %d\n",x);
    // printf("address of x = %p\n", (void *)&x);
    // printf("pointer stores == %p\n", (void *)ptr);
    // printf("value using pointer = %d\n", *ptr);
    
    int x = 10;
    int y = 50;
    int *p = &x;
    printf("%d\n", *p);
    p = &y;
    printf("%d\n", *p);
    printf("%d", p);


    return 0;

}