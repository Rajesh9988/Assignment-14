#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i;
    int b[10];
    printf("Enter array:-\n");
    for ( i = 0; i <=9; i++)
    {
        scanf(" %d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        b[i]= a[i];
        printf("%d",b[i]);
    }
    
    

}