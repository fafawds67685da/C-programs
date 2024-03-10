#include<stdio.h>
int main()
{
    int a,*aa;
    float b,*bb;
    char c,*cc;
    double d,*dd;
    a=5,b=9.9,c='i',d=9.999999;
    aa=&a,bb=&b,cc=&c,dd=&d;
    printf("normal value :%d %f %c %f \n",a,b,c,d);
    printf("pointer address :%p %p %p %p \n",aa,bb,cc,dd);
    printf("pointer values :%d %f %c %f \n",*aa,*bb,*cc,*dd);
    printf("normal address :%p %p %p %p \n",&a,&b,&c,&d);
    return 0;

}