#include<stdio.h>
int main()
{
    int a[10];
    int z=0,y=0;
    printf("\t Enter array elements \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            y=y+a[i];
        }
        else
        {
        z=z+a[i];
        }
    }
    printf("\t sum of even index array elements is %d \n",y);
    printf("\t sum of odd index array elements is %d \n",z);
    return 0;
}
