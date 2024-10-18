#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,z=0,y=0;
    printf("\t enter the range \n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
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
        for(int j=2;j<*(p+i);j++)
        {
            if(*(p+i)%j==0)
            {
                z=z+1;
            }
        }
            if(z==0)
            {
                y++;
            }
            z=0;
        
        }
        printf("\t frequency of prime number is %d \n",y);
        
         free(p);
    }
    return 0;
}