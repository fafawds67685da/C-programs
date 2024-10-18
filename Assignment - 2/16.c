#include<stdio.h>
#include<string.h>
void vow2 (char []);
int n,l1;
int main()
{
    char a[100];
    printf("\t Enter the string \n");
    fgets(a,100,stdin);
    n=strlen(a);
    n=n-1;
    char *p=a;
    vow2(p);
     
    return 0;


}
void vow2(char b[])
{
    
    char c[100];
    int h=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {
            c[h]=b[i];
            h=h+1;
        }
    }
    c[h]='\0';
   printf("\t New string is:\n");
    printf("\t %s \n", c);
    
}

