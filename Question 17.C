#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("The digits of the number are: ");

    while (num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }

    return 0;
}
