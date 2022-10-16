/*
@author: Divyansh Katare
@description: Type 1 Functions(Without arguments without return)
*/
#include <stdio.h>
void add();//declaration
void add()//function
{
    int a=5;
    int b=6;
    int sum;
    sum=a+b;
    printf("\nThe sum is %d",sum);
}
int main()
{
    add();//function calling
    return 0;
}
