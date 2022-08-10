#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,sum=0;
    printf("Enter array value:-\n");
    for ( i = 0; i<=9; i++)
    {
            scanf("%d",&a[i]);
            sum = sum +a[i];                
    }
    printf("Sum of array is :- %d",sum);
    
}