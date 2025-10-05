#include <stdio.h>
int main() {
    int password;
  do{
        printf("Enter your password:");
        scanf("%d", &password);
    }
    while (password != 1234);
        printf("acess granted");

    return 0;
}