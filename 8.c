#include<stdio.h>
void fact (int[]);
int n =5;
int main()
{
    printf("\t Enter the array elements \n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fact(a);
    printf("\t factorial of array elements are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
void fact(int x[])
{
    int t=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=x[i];j++)
        {
            
                t=t*j;
            }
            x[i]=t;
            t=1;
        }
    }
