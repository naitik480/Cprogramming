#include<stdio.h>
int main(){
            // Declaring Variable
            float km;
            float meter;
            float feet;
            float inches;
            float centimeter;

            // Taking Input
            printf("enter your kilometer:");
            scanf("%f",&km);

            // calculation part
            meter= km*1000;

            feet=km*1000*3.28084;


            inches= feet* 12;

            centimeter=km*1000*100000;

            // Display Output
            printf("total distance : " "%f %f %f %f ", meter, feet,inches, centimeter);

}
