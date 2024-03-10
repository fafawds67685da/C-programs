#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    int *aa=a;
    printf("\t Enter the 1st array elements \n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",aa);
    aa++;
    }
    aa=a;

    int *bb=b;
    printf("\t Enter the 2nd array elements \n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",bb);
    bb++;
    }
    bb=b;

int c[10];
int *cc=c;

    for(int i=0;i<5;i++)
    {
        *cc=*aa;
        cc++;
        aa++;

    }

    for(int i=0;i<5;i++)
    {
        *cc=*bb;
        cc++;
        bb++;

    }
cc=c;
    
    printf("\t Merged array is \n");

    for(int i=0;i<10;i++)
    {
    printf(" %d",*cc);
    cc++;
    }
  
    return 0;
    }