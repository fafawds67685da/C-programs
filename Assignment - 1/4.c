#include<stdio.h>
int main()
{
    int a[10];
    int max =0,z;
    printf("\t Enter array elements \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        z=max;
        if(max<a[i])
        {
            max =a[i];
        }
    }
    printf("\t second largest array element is %d \n",z);
    return 0;
}
