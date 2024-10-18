#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,d,r,z=0;
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

        int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
        printf("\t sorted elemnts in scending order are \n");
       
        for(int i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }
         free(p);
    }
    return 0;
}