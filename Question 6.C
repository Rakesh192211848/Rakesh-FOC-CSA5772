#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    // loop through the series
    for (int i = 1; i <= n; i++) {
        // check if the number is even
        if (i % 2 == 0) {
            sum += i; // add to the running total
        }
    }

    printf("The sum of the even numbers in the series is: %d\n", sum);
    return 0;
}
