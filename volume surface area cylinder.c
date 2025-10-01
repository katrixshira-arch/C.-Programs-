#include <stdio.h>
#define PI 3.14159   // define constant for π

int main() {
    float radius, height;
    float volume, surfaceArea;

    // Prompt user to enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * height) + (2 * PI * radius * radius);

    // Display results
    printf("\n--- Cylinder Properties ---\n");
    printf("Radius        : %.2f\n", radius);
    printf("Height        : %.2f\n", height);
    printf("Volume        : %.2f\n", volume);
    printf("Surface Area  : %.2f\n", surfaceArea);

    return 0;
}