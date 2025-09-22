#include<stdio.h>
   int main(){
       float Mathematics;
       float Physics;
       float Chemistry;
       float sumoftotal;
       float sumofMathsandphysics;
       printf("enter the marks of Mathematics:");
       scanf("%f",&Mathematics);

       printf("enter the marks of Physics:");
       scanf("%f",&Physics);

       printf("enter the marks of Chemistry:");
       scanf("%f",&Chemistry);
       if(Mathematics>=65 && Physics>=55 && Chemistry>=50){
        sumoftotal=Mathematics+Physics+Chemistry;
       sumofMathsandphysics=Mathematics+Physics;
       if(sumoftotal>=190 || sumofMathsandphysics>=140)
       {
           printf("%f Maths\n",Mathematics);
           printf("%f Physics\n",Physics);
           printf("%f Chemistry\n",Chemistry);
           printf("you are eligible\n");
       }else {
           printf("Not eligible");

              }

       }
       else{
                printf("Not eligible");

              }
    }
