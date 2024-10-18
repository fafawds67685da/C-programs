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
    int g=0;
    int h=0;
    for(int i=0;i<n;i=i+g)
    {
        c[h]=b[i];
        h=h+1;
        g=0;
        for(int j=i;j<n;j++)
        {
            if(b[i]==b[j])
            {
                g=g+1;
                
            }
        }
        c[h]=g+'0';
        h=h+1;
        
        
    }
    c[h]='\0';
   printf("\t New string is:\n");
    printf("\t %s \n", c);
    
}

