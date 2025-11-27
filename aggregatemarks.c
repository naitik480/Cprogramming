#include<stdio.h>
int main(){
            // Declaring Variable a,b,c,d,e are five subject names ag is sum of total marks/ aggregate marks and per is percentage.
            float a,b,c,d,e , ag, per;

            // Taking input
            printf("enter your all marks:");

            scanf("%f%f%f%f%f", &a, &b ,&c, &d ,&e);

            // Calculation Part
            ag=a+b+c+d+e;

            per=(ag/500)*100;

            // Display Output
            printf("your aggregate and percentage:" "%f %f", ag , per);

}
