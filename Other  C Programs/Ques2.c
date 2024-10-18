#include<stdio.h>
 void fact (int);
double z=1.0;
int main()
{
    int n;
    printf("\t Enter the number \n");
    scanf("%d",&n);
    fact(n);
    
    return 0;
}
void fact(int a)
{
    if(a>0)
    {
        z=z*a;
        return fact(a-1);
    }
    else
    {
        printf("\t factorial of the number = %f \n",z);
    }
}