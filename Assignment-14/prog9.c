#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10]/*={12,34,54,22,67,89,9,45,12,45}*/,i;
    printf("Enter array:-\n");
    for ( i = 0; i < 10; i++)
    {
        scanf(" %d",&a[i]);
    }
    printf("Reverse array:-\n");
    for(i=9;i>=0;i--)
    {
        printf(" %d",a[i]);
    }
}