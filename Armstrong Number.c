/*
@author:Divyansh Katare
@description: A program to check if a the entered number is an Armstrong Number or not
*/
#include <stdio.h>
int main()
{
    int num,mod,inum;
    int nofd=0;
    int sum=0;

    printf("Enter the Number \n");
    scanf("%d",&num);
    inum=num;
    for(num;num>0;nofd++) //basic idea of Armstrong Number
    {
        mod=num%10;
        num=num/10;
        mod=mod*mod*mod;
        sum=sum+mod;
    }

    if (inum==sum)
    {
        printf("%d is a Armstrong Number",inum);
    }
    else
    {
         printf("%d is not a Armstrong Number",inum);
    }
    return 0;
}
