#include<stdio.h>

int main(){
    int a[10];
    int i;

    printf("enter the no.");
    for(i=0;i<10;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("%d",a[0]);
    printf("/%d",a[5]);
    printf("/%p",&a[0]);
    printf("/%p",&a[6]);
    printf("/%p",a);
    printf("/%p",&a);







}
