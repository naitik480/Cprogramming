# include<stdio.h>

     int main(){
         int a[5];
         int b[5];
         int sum[5];
         int i;

         printf("enter a element of a :");
         for(i=0;i<5;i=i+1){
                scanf("%d",&a[i]);
        }
            printf("enter a element of b:");
         for(i=0;i<5;i=i+1){
            scanf("%d",&b[i]);
         }
          for(i=0;i<5;i=i+1){
            sum[i] =a[i]+b[i];
          }


          printf("sum");
         for(i=0;i<5;i=i+1){
            printf("%d\n",sum[i]);
        }

}
