/*
@author: Divyansh Katare
@description: Type 3 Functions (With arguments without return)
*/
#include <stdio.h>
void add(int a,int b);//declaration
void add(int a,int b)//function
{
    int sum;
    sum=a+b;
    printf("\nThe sum is %d",sum);
}

int main()
{
    add(5,6);//function calling
    add(5,3);//function calling
    add(9,5);//function calling
    return 0;
}
