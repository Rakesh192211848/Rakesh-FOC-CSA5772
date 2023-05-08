#include <stdio.h>

int main() {
    int n, i;
    int num, max;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Read the first number and initialize max
    printf("Enter integer 1: ");
    scanf("%d", &max);

    // Read the remaining numbers and update max
    for (i = 2; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    // Print the maximum value
    printf("The largest integer is: %d\n", max);

    return 0;
}
