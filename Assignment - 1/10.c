#include<stdio.h>
int main()
{
    int a[3][3];
    int z=0;
    printf("\t Enter array elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        if(i==j)
        {
            if(a[i][j]==1)
            {
                z++;
            }
        }
        }
    }
    if(z==3)
    {
    printf("\t matrix is identity matrix \n");
    }
    else{
        printf("\t matrix is not identity matrix \n");
    }
    return 0;
}