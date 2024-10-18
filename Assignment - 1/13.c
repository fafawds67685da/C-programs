#include<stdio.h>
void perf (int,int);
int n,s=0;
int main()
{
    
    
    printf("\t Enter the number \n");
        scanf("%d",&n);
        perfect(n,1);
    
    return 0;
}
void perf (int x,int i)
{
    if(i==x-1)
    {
        if(x%i==0)
        {
            s=s+i;
        }
        return perf(x,i+1);
    }
    else
    {
        if(s==x)
        {
            printf("\t number is perfect \n");
        }
        else
        {
            printf("\t number is not perfect \n");
        }
    }
}