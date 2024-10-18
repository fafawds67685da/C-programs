#include<stdio.h>
void arm(int);
int n,s=0;
int main()
{
    
    
    printf("\t Enter the number \n");
        scanf("%d",&n);
        arm(n);
    
    return 0;
}
void arm(int a)
{
    if(n!=0)
    {
        int d=a%10;
        s=s+(d*d*d);
        a=a/10;
        return arm(a);
    }
    else
    {
        if(s==n)
        {
            printf("\t number is armstrong \n");
        }
        else
        {
            printf("\t number is not armstrong \n");
        }
    }
}