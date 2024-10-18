#include<stdio.h>
int main()
{
    int a[5];
    int b[6];
    int *aa=a;
    int *bb=b;
    printf("\t Enter the array elements \n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",aa);
    aa++;
    }

    int x,y;
    printf("\t Enter the array element that is to be inserted \n");
    scanf("%d",&x);
    printf("\t Enter the index \n");
    scanf("%d",&y);

    aa=a;
    for(int i=0;i<y;i++)
    {
    *bb=*aa;
    aa++;
    bb++;
    }
    *bb=x;
    bb++;
    for(int i=y+1;i<6;i++)
    {
    *bb=*aa;
    aa++;
    bb++;
    }
bb=b;
     printf("\t  the new array  is  \n");

    for(int i=0;i<6;i++)
    {
    printf("\t %d",*bb);
    bb++;
    }


    return 0;
    }