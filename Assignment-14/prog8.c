#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],i,j,temp;
    printf("Enter array value:-\n");
    for ( i = 0; i <10; i++)
    {   
        scanf(" %d",&a[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;   
            }
            
        } 
    }
     printf("smallest number:- %d\n",a[0]);
     printf("second smallest number:- %d\n",a[1]);
    
}