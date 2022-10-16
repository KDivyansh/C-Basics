/*
@author:Divyansh Katare
@description: A program to find Volume of Sphere.
*/
#include <stdio.h>

int main()
{
    float radius,volume;
    printf("Enter the radius of sphere\n");
    scanf("%f",&radius);
    volume=(4/3.0)*3.14*radius*radius*radius;
    printf("Volume of sphere is %f",volume);

    return 0;
}
