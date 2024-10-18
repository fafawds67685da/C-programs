#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    char *p;
    printf("\t enter the range \n");
    scanf("%d",&n);
    p=(char*)calloc(n+1,sizeof(char));
    int e=0,o=0;
    if(p==NULL)
    {
        printf("\t Memory is not allocated");
    }
    else
    {
        printf("\t enter the string by character \n");
        for(int i=0;i<=n;i++)
        {
            scanf("%c",p+i);
        }
        for(int i=0;i<=n;i++)
        {
            if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
            {
                *(p+i)='*';
            }
        }

        printf("\t modified string is \n");
        for(int i=0;i<=n;i++)
        {
            printf("%c",*(p+i));
        }
         free(p);
    }
    return 0;
}