#include<stdio.h>

void sort(int *);

int n = 5;

int main()
 {
    printf("\t Enter the array elements \n");
    int a[n];
    int *aa = a;
    for (int i = 0; i < n; i++) {
        scanf("%d", aa);
        aa++;
    }
    sort(a);
    aa = a;
    printf("\t Sorted array elements are \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *aa);
        aa++;  
    }
    return 0;
}

void sort(int *xx) {
    int t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        { 
            if (*(xx + j) < *(xx + j + 1))
             { 
                t = *(xx + j);
                *(xx + j) = *(xx + j + 1);
                *(xx + j + 1) = t;
            }
        }
    }
}
