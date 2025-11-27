#include <stdio.h>

int main() {
    int math, physics, chemistry, totalmarks, TM_math_physics;
    printf("Enter the marks of Maths, Physics, Chemistry to check the eligibility: ");
    scanf("%d %d %d", &math, &physics, &chemistry);
    if (math >= 65 && physics >= 55 && chemistry >= 50) {
        totalmarks = math + physics + chemistry;
        TM_math_physics = math + physics;
        if (totalmarks >= 190 || TM_math_physics >= 140) {
            printf("You are eligible!\n");
            printf("Marks => Maths: %d, Physics: %d, Chemistry: %d\n", math, physics, chemistry);
            printf("Total Marks: %d, (Math + Physics): %d\n", totalmarks, TM_math_physics);
        } else {
            printf("You are not eligible (marks not sufficient in total).\n");
        }
    } else {
        printf("You are not eligible (subject-wise criteria not met).\n");
    }

    return 0;
}
