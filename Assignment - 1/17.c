#include<stdio.h>
void insert (int[]);
int main()
{
    int a[10];
    
    printf("\t Enter the array elements \n");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
        
    }
        
       insert(a);
    
    return 0;
}
void insert (int x[])
{
    int b[11];
    int n,y;
    printf("\t Enter the array element  \n");
    scanf("%d",&n);
    printf("\t Enter the index of the array element  \n");
    scanf("%d",&y);
    for(int i=0;i<y;i++)
    {
        b[i]=x[i];
    }
    b[y]=n;

    for(int i=y;i<10;i++)
    {
       b[i+1]=x[i];
        }

        for(int i=0;i<10;i++)
    {
       printf(" %d ",b[i]);
        }
    
}
