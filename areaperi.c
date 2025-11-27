#include<stdio.h>
int main (){
            // Declaring Variable 'r' is radius, 'p' is perimeter, 'a' is area.
            int r;
            float pi;
            float p;
            float a;

            //taking Input
            printf("enter your radius");
            scanf("%d",&r);

            // Loigical part
            pi=3.1415;           // assign the value in 'p'

            p=2*pi*r;

            a=pi*r*r;

            // Display Output
            printf("perimeter of circle:" "%.2f", p);
            printf(" \n area of circle:" "%.2f", a);



}
