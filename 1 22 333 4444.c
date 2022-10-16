/*
@author:Divyansh Katare
@description: A simple multiloop to create the following pattern
1 
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
and so on...
*/

#include <stdio.h>

int main()
{
    int i,j,n,k=1;
    printf("Enter the number""\n" );
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);

        }

        printf("\n");
    k++;
    }


    return 0;
}
