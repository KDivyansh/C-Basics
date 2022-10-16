/*
@author:Divyansh Katare
@description: A program to find Volume of Cone.
*/
#include <stdio.h>

int main()
{
    float radius,height,volume;
    printf("Enter the radius of Cone\n");
    scanf("%f",&radius);
    printf("Enter the height of Cone\n");
    scanf("%f",&height);
    volume=3.1415*radius*radius*(height/3);
    printf("Volume of cone is %f",volume);

    return 0;
}
