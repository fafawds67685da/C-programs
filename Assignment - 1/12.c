#include<stdio.h>
void fibo (int);
int n,s=0;
int main()
{
    
    
    printf("\t Enter the number \n");
        scanf("%d",&n);
        fibo(n);
    
    return 0;
}
void fibo (int x)
{int a,b,c;
a=0;
b=1;
for(int i =1;i<=x;i++)
{
printf( " %d ",a);
c=a+b;
a=b;
b=c;
}
}