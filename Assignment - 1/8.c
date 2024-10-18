#include<stdio.h>
int main()
{
    int a[3][3];
    int s=0,n;
    printf("\t Enter array elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("\t Enter the row \n");
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        s=s+a[n][i];
    }
    printf("\t sum of row array elements is %d \n",s);
    return 0;
}