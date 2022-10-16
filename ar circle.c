/*
@author:Divyansh Katare
@description: A program to find area of circle.
*/
#include <stdio.h>

int main()
{
    float r,a;
    printf("Enter the radius of Circle to find Area\n");
    scanf("%f",&r);
    a=3.1415*r*r;
    printf("Area of circle with radius %.3f is %.5f",r,a);

    return 0;
}
