#include<stdio.h>
void prime (int,int);
int n,a=0;
int main()
{
    
    
    printf("\t Enter the number \n");
        scanf("%d",&n);
        prime(n,2);
    
    return 0;
}
void prime (int x,int i)
{
    if(i==x-1)
    {
        if(x%i==0)
        {
            a++;
        }
        return prime(x,i+1);
    }
    else
    {
        if(a>0)
        {
            printf("\t number is prime \n");
        }
        else
        {
            printf("\t number is not prime \n");
        }
    }
}