/*
@author: Divyansh Katare
@description: Searching a element in array (Method-1)
*/
#include <stdio.h>
int main()
{
    int marks[100],i,size,search;
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
    printf("\nEnter the value you want to search in array :");
    scanf("%d",&search);
    for (i=0;i<size;i++)
    {
        if (marks[i]==search)
        {
            printf("\nThe value is present in array");
         break;
        }
    }
    return 0;
    }
