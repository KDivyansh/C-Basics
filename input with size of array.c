/*
@author: Divyansh Katare
@description: Taking input in an array with {Dynamic Size (till 100)}
*/
#include <stdio.h>
int main()
{
    int marks[100],i,size;
    printf("Enter the size of array between 0-99 :");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d value for array :",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<size;i++)
    {
        printf(" %d ",marks[i]);
    }
    return 0;
    }
