#include<stdio.h>
int main()
{
    int n,x=0,z=0;
    printf("\t Enter the range of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("\t Enter the array elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                x++;
            }
        }
        if(x>0)
            {
                x=0;
            }
            else
            {
                z++;
            }
    }

    printf("\t number of prime elements are %d \n",z);
    return 0;
}
