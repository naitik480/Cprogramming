#include <stdio.h>
int main (){
    float c, f;
    printf("Enter the temperature in Centigrade:\t");
    scanf("%f",&c);
    float fahrenheit=(9*c)/5+32;
    printf("fahrenheit=%f",fahrenheit);
}
