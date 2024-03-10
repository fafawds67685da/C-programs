#include<stdio.h>
#include<string.h>
int main()
{
    char c1[50];
    printf("\t Enter the string \n");
    fgets(c1,50,stdin);
    int l=strlen(c1);
    char t;
    
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(c1[j]==' ')
            {
                continue;
            }
            else
            {
                
                if((int)c1[j] > (int)c1[j+1])
                {
                    t=c1[j];
                    c1[j]=c1[j+1];
                    c1[j+1]=t;
                }
            }
        }
    }
    puts(c1);
    return 0;

}