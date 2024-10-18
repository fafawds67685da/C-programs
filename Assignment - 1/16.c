#include<stdio.h>
void replace (int[3][3]);
int main()
{
    int a[3][3];
    
    printf("\t Enter the array elements \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        
       replace(a);
    
    return 0;
}
void replace (int x[3][3])
{
    int n,y,z;
    printf("\t Enter the array element  \n");
    scanf("%d",&n);
    printf("\t Enter the index of the array element  \n");
    scanf("%d%d",&y,&z);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==y&&j==z)
            {
                x[i][j]=n;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}
