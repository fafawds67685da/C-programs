#include<stdio.h>
int main()
{
    int a,b;
    printf("\t Enter the two numbers \n");
    scanf("%d%d",&a,&b);
    int *aa,*bb;
    aa=&a;
    bb=&b;
    int c=*aa;
    *aa=*bb;
    *bb=c;
    printf("\t swapped values are %d %d \n",*aa,*bb);
    return 0;
    }