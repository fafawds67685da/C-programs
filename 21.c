#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char a[20];
    char a1[20];
    char a2[20];
    printf("\t Enter the string \n");
    scanf ("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        a1[i]=toupper(a[i]);
    }
    a1[strlen(a)] = '\0';
    int z=0;
    for(int i=0;a[i]!='\0';i++)
    {
        z=(int) a[i];
        z=z-32;
        a2[i]=(char)z;
    }
     a2[strlen(a)] = '\0';
    printf("\t string coverted to uppercase using build in function is : %s \n",a1);
     printf("\t string coverted to uppercase without using build in function is : %s \n",a2);

     for(int i=0;a[i]!='\0';i++)
    {
        a1[i]=tolower(a[i]);
    }
    a1[strlen(a)] = '\0';
    z=0;
    for(int i=0;a[i]!='\0';i++)
    {
        z=(int) a2[i];
        z=z+32;
        a2[i]=(char)z;
    }
     a2[strlen(a)] = '\0';
    printf("\t string coverted to lowercase using build in function is : %s \n",a1);
     printf("\t string coverted to lowercase without using build in function is : %s \n",a2);
    
    return 0;

}