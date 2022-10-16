/*
@author: Divyansh Katare
@description: Searching a element in array (Method-2)
*/
#include <stdio.h>
int main()
{
    int marks[100],i,size,search,op;
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
            op=1;
            break;
        }
    }
    if (op==1)
    {
        printf("The element %d is present in array at index %d",search,i);
    }
    else
    {
        printf("The element %d is not found in array",search);
    }
    return 0;
    }
