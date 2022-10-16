/*
@author:Divyansh Katare
@description: A program to check the number of digits in a entered number.
*/
#include <stdio.h>
int main()
{
    int num;
    int nofd = 0;

    printf("Enter the Number \n");
    scanf("%d", &num);
    for (num; num > 0; nofd++) // if the condition runs true than nofd will keep increasing by 1 and when conditons falls, the loop will terminate and we will get the number of digits
    {
        num = num / 10;
    }
    printf("%d", nofd);

    return 0;
}
