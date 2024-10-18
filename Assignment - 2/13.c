#include<stdio.h>
#include<string.h>
struct studentinfo
{
    char name[50];
}s[5],A;
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("\t enter %d student name \n",i+1);
        fgets(s[i].name,50,stdin);
    }
    int a[5]={0,1,2,3,4};
    int t;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            int l1 = strlen(s[i].name);
            int l2 = strlen(s[j].name);
            l1--;
            l2--;
            int l=0;
            if(l1>l2)
            {
                l=l2;
            }
            else
            {
                l=l1;
            }
            for(int k=0;k<l;k++)
            {
                if(s[a[i]].name[k]!=s[a[j]].name[k])
                {
                    int x=(int)s[a[i]].name[k];
                    int y=(int)s[a[j]].name[k];
                    if(x>y)
                    {
                        t=a[j];
                        a[j]=a[i];
                        a[i]=t;

                    }
                    break;
                }
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%s",s[a[i]].name);
    }
    return 0;
}