#include<stdio.h>
int main()
{
    int a[5];
    int *aa=a;
    printf("\t Enter the array elements \n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",aa);
    aa++;
    }
    aa=a;
    for(int i=0;i<5;i++)
    {
    printf("\t %d",*aa);
    aa++;
    }
    return 0;
    }