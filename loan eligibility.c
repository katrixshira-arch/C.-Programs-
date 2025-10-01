#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt the user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Ksh): ");
    scanf("%lf", &income);

    // Check loan qualification
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations, you qualify for a loan.\n");
    } else {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}