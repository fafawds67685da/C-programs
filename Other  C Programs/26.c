#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char a2[20];
    printf("\t Enter the string \n");
    scanf ("%s",a);
    
    int l2=strlen(a);
    for (int i = 0; i < l2; i++)
    {
        a2[i] = a[l2 - i - 1];
    }
    a2[l2] = '\0';
    if(strcmp(a,a2)==0)
    {
         printf("\t the string is palindrome string \n");
    }
    else
    {
        printf("\t the string is not palindrome string \n");
    }
    return 0;

}