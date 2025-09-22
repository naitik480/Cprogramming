#include<stdio.h>

  int main(){
      int a;
      int b;
      int c;
      printf("enter a:");
      scanf("%d",&a);

      printf("enter b:");
      scanf("%d",&b);

      printf("enter c:");
      scanf("%d",&c);

      if( a>b && a>c){
        printf("%d is a largest number",a);

      } else if( b>a && b>c){
                printf("%d is a largest number",b);

      } else if( c>a && c>b){
                printf("%d is a largest number",c);

      }
      return 0;
  }
