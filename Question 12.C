#include <stdio.h>

int main() {
    int limit, i, odd, sum = 0;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++) {
        if (i % 2 != 0) { // check if i is odd
            odd = i;
            sum += odd * odd; // add the square of odd number to sum
        }
    }

    printf("The sum of squares of odd numbers up to %d is %d\n", limit, sum);

    return 0;
}
