#include<stdio.h>
int main (){
    float temperature,centigrade;
    printf("enter temperature in centigrade :");
    scanf("%f",&temperature);

    if(temperature<0){
        printf("Freezing weather",temperature);
    }else if(temperature>=0 && temperature<10){
        printf("Very cold weather",temperature);

    }else if(temperature>=10 &&temperature<20){
        printf("cold weather",temperature);

        }else if(temperature>=20 &&temperature<30){
        printf("Normal in temperature",temperature);

        }else if(temperature>=30 &&temperature<40){
        printf("It's Hot",temperature);

        }else if(temperature>=40){
        printf(" It's  Very Hot",temperature);
        }

}
