#include<stdio.h>
int main(){

    int CP,SP,profit,loss;
    printf("enter Cost Price :");
    scanf("%d",&CP);

    printf("enter Selling Price :");
    scanf("%d",&SP);

    profit=SP-CP;
    loss=CP-SP;

    if(SP>CP){
        printf("profit=%d",profit);

    }

     else if(SP<CP){
        printf("loss=%d",loss);

    }
    else if(SP==CP){
        printf("No profit, no loss",profit,loss);

    }
    return 0;

}
