/*
@author:Divyansh Katare
@description: A program to check if a the entered number is a Palindrome or not
*/
#include <stdio.h>
int main()
{
    int num,r=0,inum;
    printf("Enter the number\n");
    scanf("%d",&num);
    inum=num;

    while (num!=0) //while loop to reverse the number
    {
        r=(r*10)+(num%10);
        num=num/10;
    }
    if (r==inum) //checking if the reversed number and initial number are same or not.
    {
        printf("%d is a palindrome",inum);
    }
    else
    {
        printf("%d is not a palindrome",inum);
    }
    return 0;
}
