#include<stdio.h>
#include<string.h>
struct studentinfo
{
int std,m1;
char name [50];
}s[5];
int main()
{
for(int i=0;i<5;i++)
{
printf("\t Enter %d  student name \n",i+1);
scanf("%s",s[i].name);
printf("\t Enter the marks in 1 subject \n");
scanf("%d",&s[i].m1);
}
int a[5];
for(int i=0;i<5;i++)
{
a[i]=s[i].m1;
}
int t;
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
for(int i=0;i<5;i++)
{
printf("%d ",a[i]);
}

return 0;
}