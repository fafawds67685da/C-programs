#include<stdio.h>
int main()
{
    int a[3][3];
    int p=1,n;
    printf("\t Enter array elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("\t Enter the column \n");
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        p=p*a[i][n];
    }
    printf("\t sum of row array elements is %d \n",p);
    return 0;
}