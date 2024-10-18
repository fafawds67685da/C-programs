#include<stdio.h>
int prime(int*);
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
    int z;
    z=prime(a);

    if(z==5)
    {
    printf("\t every element of the array is prime  \n");
    }
    else
    {
    printf("\t not every element of the array  is not prime  \n",z);
    }

    
    return 0;
    }


    int prime(int *xx)
    {
        int t,p=0,r=0;
        for(int i =0;i<5;i++)
        {
            t=*xx;
            for(int j=2;j<t;j++)
            {
                if(t%j==0)
                {
                    p++;
                }
            }
            if(p>0)
            {
                r++;
            }
            xx++;
            p=0;
        }
        return r;
        
    }