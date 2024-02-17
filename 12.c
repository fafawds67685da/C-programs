#include<stdio.h>
int main()
{
    printf("\t Enter the array elements \n");
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                x++;
                printf("\t  Duplicate element is found for %d \n",a[i]);
                printf("\t the index of the duplicate array element is %d \n",j);
            }

        }
    }
    

        if(x==0)
        {
           printf("\t No duplicate element is present \n");
        }
        
    
return 0;
}