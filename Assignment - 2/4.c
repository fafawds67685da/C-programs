#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,p2=1;
    printf("\t enter the range \n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
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
        printf("\t factorial for every number is : \n");
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=*(p+i);j++)
            {
                p2=p2*j;
            }
            printf(" %d ",p2);
            p2=1;
        }

        int n1;


        printf("\t enter the new  range \n");
        scanf("%d",&n1);

        p=(int*)realloc(p,n1*sizeof(int));

        printf("\t enter the array elements \n");
        for(int i=0;i<n1;i++)
        {
            scanf("%d",p+i);
        }
       

        printf("\t factorial for every number is : \n");
        for(int i=0;i<n1;i++)
        {
            for(int j=1;j<=*(p+i);j++)
            {
                p2=p2*j;
            }
            printf(" %d ",p2);
            p2=1;
        }       
         free(p);
    }
    return 0;
}