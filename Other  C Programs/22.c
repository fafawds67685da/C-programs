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
    strrev(a);
    printf("\t the reversede string using build in function is : %s \n",a);
       printf("\t the reversede string without using build in function is : %s \n",a2);
    return 0;

}