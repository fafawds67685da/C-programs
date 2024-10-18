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
if(s[i].avg>75)
{
printf("\t the student grade is A \n");
}
else if(s[i].avg<75&&s[i].avg>65)
{
printf("\t the student grade is B \n");
}
else
{
printf("\t the student grade is C \n");
}
printf("\t Enter student id \n");
scanf("%d",&s[i].std);
}




return 0;
}