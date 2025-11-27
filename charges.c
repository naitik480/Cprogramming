#include <stdio.h>
int main() {
    int id;
    char name[50];
    float units, charge, total;
    scanf("%d", &id);
    scanf("%s", &name);
    scanf("%f", &units);
    if (units <= 199)
        charge = 1.20;
    else if (units >= 200 && units <= 399)
        charge = 1.50;
    else if (units >= 400 && units <= 599)
        charge = 1.80;
    else
        charge = 2.00;
    total = units * charge;
    if (total > 400)
        total = total + (total * 0.15);
    if (total < 100)
        total = 100;
    printf("Customer ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Bill: %.2f", total);
    return 0;
}
