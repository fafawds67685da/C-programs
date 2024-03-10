#include<stdio.h>
int main()
{
    int a=5;
    int *aa=&a;
    aa++;

    printf("increment value  %p \n",aa);
    aa--;
    printf("decrement value  %p \n",aa);
    return 0;

}