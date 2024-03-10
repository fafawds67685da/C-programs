#include<stdio.h>
int main()
{
    printf("\t Enter the array elements \n");
    int a[5];
    int *aa=a;
    for(int i=0;i<5;i++)
    {
        scanf("%d",aa);
        aa++;
    }
    aa=a;

    int n,x=0;
    printf("\t Enter the array element which is to be searched \n");
    scanf("%d",&n);
   
    for(int i=0;i<5;i++)
    {
        if(n==*aa)
        {
            x++;
            printf("\t  the array element %d is present \n",n);
        }
        aa++;
    }
        if(x==0)
        {
           printf("\t the array elemnt %d is not present \n",n);
        }
        
    
return 0;
}