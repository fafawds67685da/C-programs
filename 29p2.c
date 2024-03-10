#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("\t Enter the string \n");
    scanf("%s",a);
    int z;
    char c;
    printf("\t Enter the charachter  \n");
    scanf(" %c",&c);

    printf("\t Enter the index  \n");
    scanf("%d",&z);

   a[z]=c;

     printf("\t the new string is %s \n",a);
    return 0;

}