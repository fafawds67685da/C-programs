#include<stdio.h>
int sort(int[3][3]);
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

     printf("\t The original matrix is : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
      {
       printf("%d ",a[i][j]);
      }
      printf("\n");
    }
sort(a);
     printf("\t The sorted array is : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
      {
       printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    return 0;
}
int sort(int x[3][3])
{
    int t;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                for(int l=0;l<3;l++)
                {
                    if(x[i][j]<x[k][l])
                    {
                        t=x[i][j];
                        x[i][j]=x[k][l];
                        x[k][l]=t;
                    }
                }
            }
        }
    }
}  