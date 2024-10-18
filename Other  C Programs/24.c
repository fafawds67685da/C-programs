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
    
    strcat(a,a2);
    printf("\t the merged string is : %s \n",a);
    return 0;

}