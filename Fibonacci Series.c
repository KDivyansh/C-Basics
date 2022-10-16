/*
@author:Divyansh Katare
@description: A simple multiloop to create simple series called Fibonaaci Series
*/
#include <stdio.h>
int main()
{
    int prevtoprev,prev,result,n,i;
    printf("Enter the number of terms in Fibonacci Series \n");
    scanf("%d",&n);

    prevtoprev=0;
    prev=1;

    for (i=1;i<=n;i++) //Fibonacci series is the adding the previous two numbers to get the next number.  
    {
        printf("%d ",prevtoprev);

        result=prevtoprev+prev;
        prevtoprev=prev;
        prev=result;
    }
    return 0;

}
