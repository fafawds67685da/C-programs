#include<stdio.h>
int fact (int);
int z=0;
int r=0;
int main(void)
{
    int n,y;
    printf("\t Enter the range of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("\t Enter the array elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        y=fact(a[i]);
        if(y==a[i])
        {
            z++;
            
        }
        r=0;
    }
    printf("\t number of palindrome elements are %d \n",z);
    return 0;
}
int fact(int b)
{
    
    if(b!=0)
    {
        int d= b%10;
        r=(r*10)+d;
        return fact(b/10);
    }
    else
    {
        return r;
        
    }
}