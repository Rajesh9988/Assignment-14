#include<stdio.h>
int main()
{
    int a[10];
    int max=-1,i;
    printf("Enter array :-\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if (max<a[i])
        {
            max = a[i];
        }  
    }
    printf("Max number is :- %d",max);
}