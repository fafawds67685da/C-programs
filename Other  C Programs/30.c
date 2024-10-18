#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("\t Enter the string \n");
    scanf("%s",a);
    int z;
    printf("\t Enter the index  \n");
    scanf("%d",&z);
    for(int i=z+1;i<=strlen(a);i++)
    {
        a[i-1]=a[i];
    }


     printf("\t the new string is %s \n",a);
    return 0;

}