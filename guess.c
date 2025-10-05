
#include <stdio.h>

#include <stdio.h>
int main() {
    int number;
    int guess=2;
    printf("enter your secret number");
    scanf("%d",&number);
    while (guess>1 && guess<=20){

        printf("your guess " );
        scanf("%d",&guess);
        if (guess==number) {
            printf("congratulations");
        }
        else if (guess>number) {
            printf("too high");
        }
        else if (guess<number) {
            printf("too low");
        }
        else {
            printf("enter a number");
        }
guess++;

 b
}
    printf("enter a number greater than 1");



    return 0;

}