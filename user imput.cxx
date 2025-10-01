#include <stdio.h>

int main() {
    float height;           // for height in meters/centimeters
    double bankBalance;     // for money, more precise than float
    char phoneNumber[20];   // phone numbers stored as string to keep leading zeros

    // Prompt the user for inputs
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya Shillings): ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);   // string input (no & needed)

    // Display collected data
    printf("\n------ Your Details ------\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: KES %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}