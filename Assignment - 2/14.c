#include<stdio.h>
#include<string.h>
void vow (char *);
 int n;
int main()
{
    char a[100];
    printf("\t Enter the string \n");
    fgets(a,100,stdin);
    n= strlen(a)-1;
    char *p=a;
    vow(p);
    printf("\t  the new string is \n");
        printf("%s",a);
    return 0;


}
void vow(char *z)
{
    int g;
    for(int i=0;i<n;i++)
    {
        g=(int)*z;
        g=g+1;
        *z=(char)g;
        z=z+1;
    }
}
