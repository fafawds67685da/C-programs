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
        }
        int t;
         for(int i=0;i<n;i=i+2)
        {
            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
        }
        printf("\tnewly arranged elements are \n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }

         free(p);
    }
    return 0;
}