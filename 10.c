#include<stdio.h>
int main()
{
    printf("\t Enter the array elements \n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max,min;
    max=a[0];
    min =a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
        }
    int sum =max+min;
    int diff=max-min;
    printf("\n");
    printf("\t Maximun element is %d \n",max); 
    printf("\t Maximun element is %d \n",min);  
    printf("\t sum is %d \n",sum);   
    printf("\t Difference is %d \n",diff); 
return 0;
}