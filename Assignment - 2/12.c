#include<stdio.h>
#include<string.h>
struct studentinfo
{
int std,m1,m2;
double avg;
char name [50];
}s[5];
int main()
{
for(int i=0;i<5;i++)
{
printf("\t Enter %d  student name \n",i+1);
scanf("%s",s[i].name);
printf("\t Enter the marks in 2 subjects \n");
scanf("%d%d",&s[i].m1,&s[i].m2);
s[i].avg=(s[i].m1+s[i].m2)/2;
}

int max=0,z=0;
for(int i=0;i<5;i++)
{
if(max<s[i].avg)
{
max=s[i].avg;
z=i;
}
}
printf("\t student with highest avg marks is \n");
printf("\t name is : %s \n",s[z].name);
printf("\t student name is : %s \n",s[z].name);


return 0;
}
