#include<stdio.h>
void sort (int[]);
int n=5;
int main()
{

    printf("\t Enter the array elements \n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    printf("\t Sorted array elements are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
void sort(int x[])
{
    int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]<x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
}