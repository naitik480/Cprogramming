#include <stdio.h>
int main(){
            // Declaring variable sp is selling price, tp is total profit, cp is cost price.
            float sp,tp,cp;
            float tcp; // tcp is total cost price

            // taking Input
            printf("enter your selling price:");
            scanf("%f", &sp);

            printf(" \n enter your profit price:");
            scanf("%f",&tp);

            // Calculation part
            tcp=sp-tp;
            cp=tcp/15;

            // Display Output
            printf("Cost price of 1 item: %f",cp);
            printf("\n  Total cost price %f " , tcp);



}
