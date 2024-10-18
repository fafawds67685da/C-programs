#include<stdio.h>
int main()
{
    int a[3][3];
    int s=0;
    printf("\t Enter array elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        if(i==j)
        {
            s=s+a[i][j];
        }
        }
    }
    printf("\t sum of diagonal array elements is %d \n",s);
    return 0;
}
