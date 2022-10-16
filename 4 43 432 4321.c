/*
@author:Divyansh Katare
@description: A simple multiloop to create the following pattern
n
n (n-1)
n (n-1) (n-2)
n (n-1) (n-2) (n-3)
n (n-1) (n-2) (n-3) (n-4)
n (n-1) (n-2) (n-3) (n-4) (n-5) and so on..
*/
#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number""\n" );
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",j);

        }

        printf("\n");
    }


    return 0;
}
