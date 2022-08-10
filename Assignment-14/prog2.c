#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i,sum;
    float avg;
    printf("Enter a 10 array values:-\n");
    for (i = 0; i<=9; i++)
    {
        scanf(" %d", &a[i]);
        sum = sum + a[i];
        avg = sum / 100.0;
    }
    printf("The average is:- %f",avg);
}