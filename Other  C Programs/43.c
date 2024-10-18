#include<stdio.h>
#include<string.h>

int main() 
{
    char c[50];
    char a[50];
    printf("\t Enter the string \n");
    fgets(c, 50, stdin);
    int l = strlen(c);
   
    c[l-1]=' ';

    char *aa = a;
    
    for(int i = 0; i < l; i++) 
  {
        if(c[i] == ' ' ) 
        {
            int len = strlen(a);
            int m = len / 2;
            char v;
            for(int j = 0; j < m; j++) {
                v = a[j];
                a[j] = a[len - j - 1];
                a[len - j - 1] = v;
            }
            printf("%s ", a);
            aa = a;
        } else {
            *aa = c[i];
            aa++;
        }
  }
    
    return 0;
}
