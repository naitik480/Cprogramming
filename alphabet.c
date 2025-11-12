#include<stdio.h>
int main (){
    char alphabet;
    printf("enter an alphabet :");
    scanf("%c",&alphabet);

    if(alphabet=='a'|| alphabet=='i' || alphabet=='o'|| alphabet=='u'|| alphabet=='e'|| alphabet=='A'|| alphabet=='I' || alphabet=='O'|| alphabet=='U'|| alphabet=='E' ){
        printf("The alphabet is a vowel",alphabet);
    } else{
        printf("The alphabet is a consonant",alphabet);

    }
    return 0;
}
