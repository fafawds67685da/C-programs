#include<stdio.h>
void delete (int[]);
int main()
{
    int a[10];
    
    printf("\t Enter the array elements \n");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
        
    }
        
       delete(a);
    
    return 0;
}
void delete (int x[])
{
    int b[9];
    int n,y;
    printf("\t Enter the index of the array element  \n");
    scanf("%d",&y);
    for(int i=0;i<y;i++)
    {
        b[i]=x[i];
    }
    

    for(int i=y+1;i<10;i++)
    {
       b[i-1]=x[i];
        }

        for(int i=0;i<9;i++)
    {
       printf(" %d ",b[i]);
        }
    
}
