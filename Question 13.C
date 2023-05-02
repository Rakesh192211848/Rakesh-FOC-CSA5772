#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double num, sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += pow(num, 3);
    }

    printf("The sum of the cubes of the %d numbers is: %lf\n", n, sum);

    return 0;
}
