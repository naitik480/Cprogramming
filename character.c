# include<stdio.h>

int main () {
    char character ;
    printf("enter a character :");
    scanf("%c",&character);

    if(character>='A' && character<='Z' || character>='a' && character<='z'){
        printf("it is an alphabet",character);

    } else if(character>='0' && character<='9'){
        printf("it is a digit",character);

    }else {
        printf("it is a special character",character);

    }
    return 0;
    }
