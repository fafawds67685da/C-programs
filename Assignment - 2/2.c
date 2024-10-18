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
            int x=*(p+i);
            r=0;
            while(x!=0)
            {
                d=x%10;
                r=d+(r*10);
                x=x/10;
            }
            if(r==*(p+i))
            {
                z=z+1;
            }
        }
        printf("\t Number of palindrome number is : %d \n",z);
       
         free(p);
    }
    return 0;
}