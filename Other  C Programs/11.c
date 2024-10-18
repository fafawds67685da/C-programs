#include<stdio.h>
int main()
{
    printf("\t Enter the array elements \n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int n,x=0;
    printf("\t Enter the array element which is to be searched \n");
    scanf("%d",&n);
   
    for(int i=0;i<5;i++)
    {
        if(n==a[i])
        {
            x++;
            printf("\t  the array element %d is present \n",n);
            printf("\t the index of the array element is %d \n",i);
        }
    }
        if(x==0)
        {
           printf("\t the array elemnt %d is not present \n",n);
        }
        
    
return 0;
}