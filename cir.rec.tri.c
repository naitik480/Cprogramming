#include<stdio.h>
int main()
{
    int choice;
    float area, length, width, base, height, radius;
    printf("1.Circle\n");
    printf("2.Rectangle\n");
    printf("3.Triangle\n");
    printf("Enter number as per choice(1-3): ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the radius of a circle: ");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("Area of a circle = %.2f",area);
        break;
    case 2:
        printf("Enter the length of the rectangle: ");
        scanf("%f",&length);
        printf("Enter the width of the rectangle: ");
        scanf("%f",&width);
        area=length*width;
        printf("Area of a triangle = %.2f",area);
        break;
    case 3:
        printf("Enter the base of a triangle: ");
        scanf("%f",&base);
        printf("Enter the height of a triangle: ");
        scanf("%f",&height);
        area=0.5*base*height;
        printf("Area of a triangle = %.2f",area);
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}
