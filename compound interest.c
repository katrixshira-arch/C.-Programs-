#include <stdio.h>
#include <math.h>   // Needed for pow()

int main() {
    float principal, rate, time, compound_interest, amount;

    // Input values
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);

    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    // Display result
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}