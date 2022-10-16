/*
@author:Divyansh Katare
@description: A program to find Volume of Cylinder.
*/
#include <stdio.h>

int main()
{
    float radius,height,volume;
    printf("Enter the radius of cylinder\n");
    printf("Enter the height of cylinder\n");
    scanf("%f",&radius);
    scanf("%f",&height);
    volume=3.1415*radius*radius*height;
    printf("Volume of cylinder is %f",volume);

    return 0;
}
