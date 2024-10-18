#include<stdio.h>
int main()
{
    int a[5];
    printf("\t Enter array elements \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int n,b=0;
     printf("\t Enter array element to be search \n");
     scanf("%d",&n);
    int lb =0,ub =4;
    while(lb<=ub)
    {
        int m =(lb+ub)/2;
        if(a[m]==n)
        {
            b++;
            break;
        }
        else if(n>a[m])
        {
            lb=m+1;
            
        }
        else
        {
            ub=m-1;
        }
    }
    if(b==0)
    {
        printf("\t array element is not found \n");
    }
    else
    {
    printf("\t array element is  found  \n");
    }
    return 0;
}
