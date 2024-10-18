#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    printf("\t enter the range \n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    int e=0,o=0;
    if(p==NULL)
    {
        printf("\t Memory is not allocated");
    }
    else
    {
        printf("\t enter the  elements \n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",p+i);
            if(*(p+i)%2==0)
            {
                e=e+*(p+i);
            }
            else
            {
                o=o+*(p+i);
            }
        }
        printf("\t sum of even elements is : %d \n",e);
        printf("\t sum of odd elements is : %d \n",o);
       
         free(p);
    }
    return 0;
}