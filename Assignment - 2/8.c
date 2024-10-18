#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    printf("\t enter the range \n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    int n2;
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
        }

          printf("\t enter the  number \n");
         scanf("%d",&n2);
        
        printf("\t elemnts divisible by %d are \n",n2);
        for(int i=0;i<n;i++)
        {
            if(*(p+i)%n2==0)
            {
                printf(" %d ",*(p+i));
            }
        }

         free(p);
    }
    return 0;
}