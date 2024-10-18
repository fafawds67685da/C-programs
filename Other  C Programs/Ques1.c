#include<stdio.h>
void sum (int);
int z=0;
void main()
{
    int n;
    printf("\t Enter the number \n");
    scanf("%d",&n);
    sum(n);
}
void sum(int a)
{
    if(a!=0)
    {
        int d = a%10;
        z=z+d;
        return sum(a/10);
    }
    else
    {
        printf("\t sum of the digits = %d \n",z);
    }
}