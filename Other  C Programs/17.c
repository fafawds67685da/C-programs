#include<stdio.h>
int main()
{
    int a[5][5];
    int b[5][5];
    int m,n;

    printf("\t Enter the range of the  2 D array \n");
    scanf("%d%d",&m,&n);
     
    
    printf("\t Enter the array elements \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    
    
    printf("\t Enter the array elements \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
       printf("%d ",a[i][j]);
      }
      printf("  ");
      for(int j=0;j<n;j++)
      {
       printf("%d ",b[i][j]);
      }
      printf("\n");
    }
int z=0;
for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
      {
        if(a[i][j]==b[i][j])
        {
            z++;
        }
      }
    }
    if(z==m*n)
    {
        printf("\t Both array are equivalent \n");

    }
    else{
        printf("\t Both array are not equivalent \n");
    }
    return 0;
}
    