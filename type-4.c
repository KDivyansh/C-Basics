/*
@author: Divyansh Katare
@description: Type 4 Functions (With arguments With return)
*/

#include <stdio.h>
int add(int a,int b); //declaration
int add(int a,int b) //function
{
    int sum;
    sum=a+b;
    return sum;
}

int main()
{
    int sum;
    sum=add(5,6); //function calling
    printf("%d",sum);
    return 0;
}
