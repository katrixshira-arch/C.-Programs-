#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input values
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Display result
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}