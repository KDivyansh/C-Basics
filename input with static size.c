/*
@author:Divyansh Katare
@description: Taking input in an array and displaying them. (Static Size)
*/
#include <stdio.h>
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d value for array \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
    }
