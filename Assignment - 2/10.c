#include<stdio.h>
#include<string.h>
struct dob
{
    char name[50];
    int d,bcd,amt;
}s[100];
int main()
{
    int n;
    printf("\t enter number of student \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\t enter %d student name \n",i+1);
        scanf("%s",&s[i].name);
        printf("\t enter the book code \n");
        scanf("%d",&s[i].bcd);
        printf("\t enter the number days after which it is returned \n");
        scanf("%d",&s[i].d);
    }
float amt;
    for(int i=0;i<n;i++)
    {
        if(s[i].d<=7)
        {
            s[i].amt = s[i].d*50;
        }
        else if ( s[i].d<=14&&s[i].d>7)
        {
            s[i].amt = 350 + (s[i].d-7)*100;
        }
        else
        {
            s[i].amt = 350+700+(s[i].d-14)*200;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("\ttudent name is %s \n",s[i].name);
        printf("\t fine to be paid is %f \n",s[i].amt);
    }

    
    return 0;
}
