/*
@author:Divyansh Katare
@description: A simple multiloop to create the following pattern
  *
 ***
*****
*/

#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows in pyramid \n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for(j=n; j>i;j--)

        {
             printf(" ");
        }

        for(j=1;j<=i;j++)
        {
             printf("*");
        }

        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
