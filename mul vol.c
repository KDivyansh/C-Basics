/*
@author:Divyansh Katare
@description: A program to find Volume of multiple shapes listed in menu.
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of which volume is to be find\n 1 - Cone \n 2 - Cylinder \n 3 - Sphere\n");
    scanf("%d",&n);
    if (n==1)
    {
        float radius,height,volume;
    printf("Enter the radius of Cone\n");
    scanf("%f",&radius);
    printf("Enter the height of Cone\n");
    scanf("%f",&height);
    volume=3.1415*radius*radius*(height/3);
    printf("Volume of cone is %f",volume);
    }
    else if (n==2)
    {
        float radius,height,volume;
    printf("Enter the radius of cylinder\n");
    scanf("%f",&radius);
    printf("Enter the height of cylinder\n");
    scanf("%f",&height);
    volume=3.1415*radius*radius*height;
    printf("Volume of cylinder is %f",volume);
    }
    else if(n==3)
    {
        float radius,volume;
    printf("Enter the radius of sphere\n");
    scanf("%f",&radius);
    volume=(4/3.0)*3.14*radius*radius*radius;
    printf("Volume of sphere is %f",volume);
    }
    else
    {
        printf("The input is invalid");
    }
    return 0;
}
