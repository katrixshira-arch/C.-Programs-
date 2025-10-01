#include <stdio.h>

int main() {
    float attendance, avg_marks;

    // Input attendance
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    // Input average marks
    printf("Enter average marks: ");
    scanf("%f", &avg_marks);

    // Check eligibility
    if (attendance >= 75 && avg_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}