#include<stdio.h>
int main(){
    int roll_no;
    char name[10];
    float percentage,totalmarks,first,second,third;
    printf("enter a roll_no :");
    scanf("%d",&roll_no);

    printf("enter name :");
    scanf("%s",&name);

    printf("enter marks of any first subject:");
    scanf("%f",&first);

    printf("enter marks of any second subject:");
    scanf("%f",&second);

    printf("enter marks of any third subject:");
    scanf("%f",&third);

    totalmarks=first+second+third;
    printf("totalmarks=%f \n",totalmarks);

    percentage=(totalmarks/300)*100;
    printf("percentage=%f \n",percentage);

    if(percentage>=60){
        printf("First division",percentage);

    }else if(percentage>=50 && percentage<60){
        printf("second division",percentage);

     }else if(percentage>=40 && percentage<50){
        printf("third division",percentage);

     } else if (percentage<40){
        printf("Fail",percentage);
     }
}
