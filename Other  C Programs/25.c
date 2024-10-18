#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char a2[20];
    printf("\t Enter the first string \n");
    scanf ("%s",a);
    printf("\t Enter thesecond  string \n");
    scanf ("%s",a2);
    int l=strcmp(a,a2);
    if(l==0)
    {
        printf("\t the strings are equal \n");
    }
    else
    {
        printf("\t the strings are not equal \n");
    }
   
    return 0;

}