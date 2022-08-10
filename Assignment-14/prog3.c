#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,se,so;
    printf("Enter a value of array:-\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            se = se+a[i];
        }
        else
        {
            so = so+a[i];
        }
        
    }
    printf("Sum of even number is:- %d\n",se);
    printf("Sum of odd number is :- %d",so);
    
}