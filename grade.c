#include<stdio.h>

int main(){
    char Grade;
    printf("enter a Grade :");
    scanf("%c",&Grade);

    if(Grade=='E'){
        printf("Description :Excellent",Grade);

    }else if(Grade=='V'){
        printf("Description :Very Good",Grade);

    }else if(Grade=='A'){
        printf("Description : Average",Grade);

    }else{
        printf("Invalid grade entered",Grade);
    }
    return 0;
}
