#include<stdio.h>
int main()
{
    int a[10];
    int p=1;
    printf("\t Enter array elements \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        for(int j=1;j<=a[i];j++)
        {
        p=p*j;
        }
        a[i]=p;
        p=1;
    }
for(int i=0;i<10;i++)
    {
        printf(" %d",a[i]);
        
    }
    return 0;
}
