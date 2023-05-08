#include <stdio.h>

double exponentialSeries(double x, int n) {
    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        term *= x / i;
        sum += term;
    }

    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double result = exponentialSeries(x, n);
    printf("Result: %lf\n", result);

    return 0;
}
