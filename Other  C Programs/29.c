#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[20];
    printf("\t Enter the string \n");
    scanf("%s",a);
    int z;
    char c;
    printf("\t Enter the charachter to be inserted \n");
    scanf(" %c",&c);

    printf("\t Enter the index at which charachter is to be inserted \n");
    scanf("%d",&z);

    for(int i=0;i<z;i++)
    {
        b[i]=a[i];
    }
    b[z]=c;

    for(int i=z+1;i<=strlen(a);i++)
    {
        b[i]=a[i-1];
    }
    b[strlen(a)+1]='\0';

     printf("\t the new string is %s \n",b);
    return 0;

}