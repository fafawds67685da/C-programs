#include<stdio.h>
int main()
{
    int n;
    printf("\t Enter the range of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("\t Enter the array elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int lb,ub,t;
    lb=0;
    ub=n-1;
    while(lb<ub)
    {
        t=a[lb];
        a[lb]=a[ub];
        a[ub]=t;
        ub--;
        lb++;

    }
    printf("\t Reversed array elements are : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    
    return 0;
}
