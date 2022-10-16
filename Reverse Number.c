/*
@author:Divyansh Katare
@description: A Program to reverse a number.
*/
#include <stdio.h>
int main()
{
    int num,reverse=0,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    while (num!=0) 
    /*this is the most used method of reversing a number,
    firstly the number is modulated by 10 which is then stored in reverse value
    than the reverse value is multiplied by 10 moving digits from ones-> tens -> hundreds and so on 
    finally reversing the number.
    */
    {
        reverse=(reverse*10)+(num%10);
        num=num/10;
    }
    printf("\n%d",reverse);
    return 0;
}
