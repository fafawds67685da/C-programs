#include<stdio.h>
int main()
{
    int a[5][5];
    int b[5][5];
    int m,n;

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
int y,z;
printf("\t Enter the number of the row to be interchnge \n");
    scanf("%d%d",&y,&z);
    y--;
    z--;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
        if(i==y)
        {
       b[z][j]=a[i][j];
      }
      else if(i==z)
        {
       b[y][j]=a[i][j];
      }
      else
      {
        b[i][j]=a[i][j];
      }
      }
    }

    printf("\t The new matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
       printf("%d ",b[i][j]);
      }
      printf("\n");
    }
    return 0;
}
    