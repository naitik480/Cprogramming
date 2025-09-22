#include<stdio.h>

 int main(){
     int x;
     int y;
     printf("enter x:");
     scanf("%d",&x);

     printf("enter y:");
     scanf("%d",&y);

     if(x>0 && y>0){
        printf("%d%d lies in Quadrant I",x,y);

     } else if(x<0 && y>0) {
         printf("%d%d lies in Quadrant II",x,y);

     } else if(x<0 && y<0) {
         printf("%d%d lies in Quadrant III",x,y);

     } else if(x>0 && y<0) {
         printf("%d%d lies in Quadrant IV",x,y);

     } else if(x == 0 && y == 0) {
         printf("%d%d lies in Origin",x,y);

     }
     return 0;
     }
