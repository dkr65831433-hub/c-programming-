#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;   // extract last digit
        sum += digit;       // add it to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
