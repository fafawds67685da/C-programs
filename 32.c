#include<stdio.h>
int main()
{
    int a,b;
    printf("\t Enter the two numbers \n");
    scanf("%d%d",&a,&b);
    int *aa,*bb;
    aa=&a;
    bb=&b;
    int c=*aa+*bb;
    printf("\t Sum of  the two numbers using pointers is %d \n",c);
    return 0;
    }