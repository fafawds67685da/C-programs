#include<stdio.h>
void har (int);
int n,s=0;
int main()
{
    
    
    printf("\t Enter the number \n");
        scanf("%d",&n);
        har(n);
    
    return 0;
}
void har (int x)
{
    if(x!=0)
    {
        int d=x%10;
        s=s+d;
        return har(x/10);
    }
    else
    {
        if(n%s==0)
        {
            printf("\t number is harshad number \n");
        }
        else
        {
            printf("\t number is not harshad number \n");
        }
    }
}