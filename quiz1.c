#include <stdio.h>
int main() {
    int balance,withdraw;
    printf(" enter your starting balance:");
    scanf("%d",&balance);
    while(balance>0){
printf(" enter amount to withdraw:");
        scanf("%d",&withdraw);
       balance= balance-withdraw;
        printf(" your current balance is:%d\n",balance);

    }
    printf(" your balance is less than 0:");
    return 0;
}