/*
@author: Divyansh Katare
@description: Sum of entered values in an array
*/
#include <stdio.h>
int main()
{
    int marks[100],i,size,sum;
    printf("Enter the size of array between 0-99 :");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d value for array : ",i+1);
        scanf("%d",&marks[i]);
    }
    sum=0;
    for(i=0;i<size;i++)
    {
        sum+=marks[i];
    }
    printf("The sum of digits is : %d",sum);
    return 0;
    }
