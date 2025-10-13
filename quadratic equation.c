#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a :");
    scanf("%d",&a);

    printf("enter b :");
    scanf("%d",&b);

    printf("enter c :");
    scanf("%d",&c);

    d=b^2-4*a*c;
    printf("%d",d);

    if(d>0){
        printf("%d are two real and distinct roots",d);
    }else if(d==0){
        printf("%d are two real and equal roots",d);

    } else if(d<0){
        printf("%d are two complex (imaginary) roots",d);

    }
    }
