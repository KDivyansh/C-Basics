/*
@author: Divyansh Katare
@Description: Filling the array and then taking average of entered numbers.
*/
#include <stdio.h>
int main()
{
    int marks[100],i,size;
    float avg=0,sum=0;
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
    avg=sum/size;
    printf("The average of digits is : %f",avg);
    return 0;
    }
