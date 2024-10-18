#include<stdio.h>
int main()
{
    int a[10];
    int z=1;
    printf("\t Enter array elements \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        z=z*a[i];
    }
    printf("\t product of array elements is %d \n",z);
    return 0;
}
