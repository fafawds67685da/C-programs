#include<stdio.h>
int main()
{
    int a[5];
    int *aa=a;
    printf("\t Enter the array elements \n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",aa);
    aa++;
    }
    aa=a;
    int max,min;
    max=*aa;
    min=*aa;
    for(int i=0;i<5;i++)
    {
   if(max<*aa)
   {
    max=*aa;
   }
   if(min>*aa)
   {
    max=*aa;
   }
    aa++;
    }

    
    printf("\t largest array element is %d \n",max);
    printf("\t smallest array element is %d \n",min);
    return 0;
    }