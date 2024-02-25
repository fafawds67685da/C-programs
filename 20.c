#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("\t Enter the string \n");
    scanf ("%s",a);
    int l1,l2=0;
    l1=strlen(a);
    for(int i=0;a[i]!='\0';i++)
    {
        l2=l2+1;
    }
    printf("\t the length of the string using build in function is : %d \n",l1);
    printf("\t the length of the string without using build in function is : %d \n",l2);
    return 0;

}