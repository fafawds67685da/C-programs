#include<stdio.h>
int transpose(int[5][5]);
    int m,n;
int main()
{
    int a[5][5];


    printf("\t Enter the range of the 2 D array \n");
    scanf("%d%d",&m,&n);
    
    printf("\t Enter the array elements \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }

     printf("\t The original matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
       printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    transpose(a);
    
    return 0;
}
    int transpose(int x[5][5])
    {

     printf("\t The transpose of matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
       printf("%d ",x[j][i]);
      }
      printf("\n");
    }
    }