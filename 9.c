#include<stdio.h>
void dup (int[]);
int n =5,z=0;
int main()
{
    printf("\t Enter the array elements \n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    dup(a);
return 0;
}
void dup(int x[])
{
    int t=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i]==x[j])
            {
                z++;
            }
        }
        }
        if(z>0)
        {
            printf("\t Duplicate elements are present \n");
        }
        else
        {
             printf("\t Duplicate elements are not present \n");
        }
    }
