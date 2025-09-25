//simple c program (Hello World)
/*
Name :Rodgers Kilongosi
Reg  :CT100/G/26245/25
Description :Customer age and income program
*/
#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in sh): ");
    scanf("%f", &income);

    // Loan qualification check
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan\n");
    } else {
        printf("unfortunately,we are unable to offer you a loan at this time\n");
    }

    return 0;
}