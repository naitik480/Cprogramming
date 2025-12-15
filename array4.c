# include<stdio.h>

     int main(){
         int b[5];
         int*p=&b;
         int i;
         printf("enter a element :");
         for(i=0;i<5;i=i+1){
            scanf("%d",&b[i]);
         }for(i=0;i<5;i=i+1){
             printf("%p\n",p[i]);

    }

}
