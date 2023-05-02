#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0, power;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate sum of nth power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;

        // store sum of nth power of digits in result
        power = round(pow(remainder, n));
        result += power;

        originalNum /= 10;
    }

    // check if number is Armstrong or not
    if (result == num) {
        printf("%d is an Armstrong number.", num);
    }
    else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
