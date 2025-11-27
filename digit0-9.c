#include<stdio.h>
int main()
{
    int num;
    printf("Enter digit between 0 to 9\n");
    scanf("%d",&num);
    switch(num)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
    default:
        printf("Invalid digit");
    }
    return 0;
}
