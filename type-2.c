/*
@author: Divyansh Katare
@description: Type 2 Functions (Without arguments with return)
*/
#include <stdio.h>
int add();//declaration
int add()//function
{
    int a=5;
    int b=6;
    int sum;
    sum=a+b;

    return sum;
}

int main()
{
    int sum;
    sum=add(); //function calling
    printf("%d",sum);
    return 0;
}
