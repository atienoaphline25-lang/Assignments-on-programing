//program to calculate volume and surface area of a cylinder
/*
Name:Aphline Atieno
Reg no:CT101/G/26529/25
Date:21/09/25
Description:Program to calculate surface area and volume
*/

#include<stdio.h>

int main()
{
float pi=3.142;
float radius, height, volume, surface_area;

    printf("enter radius: ");
    scanf("%f",&radius);
    
    printf("enter height");
    scanf("%f",&height);
    
    volume=pi*radius*radius*height;
    surface_area=2*pi*radius *radius +2*pi*radius*height;
    
    printf("volume is%f",volume);
    printf("surface area is %f",surface_area);
    
    return 0;
}