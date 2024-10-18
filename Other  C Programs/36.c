#include<stdio.h>
void rev(int*);
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
    rev(a);

    aa=a;
    printf("\t  the new array  is  \n");

    for(int i=0;i<5;i++)
    {
    printf("\t %d",*aa);
    aa++;
    }
    return 0;
    }


    void rev(int *xx)
    {
        int *y,*z;
        y=xx;
        z=xx+4;
        int d=0;
        for(int i =0;i<2;i++)
        {
            y=y+i;
            z=z-i;
            d=*y;
            *y=*z;
            *z=d;
        }
        
    }