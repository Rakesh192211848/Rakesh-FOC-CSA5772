#include <stdio.h>
#include <math.h>

double calculateSine(double x, int n) {
    double result = 0;
    int sign = 1;
    int i, j;

    for (i = 1, j = 1; i <= n; i++, j += 2) {
        double term = pow(x, j) / tgamma(j + 1);
        result += sign * term;
        sign *= -1;
    }

    return result;
}

int main() {
    double angle;
    int terms;

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double sine = calculateSine(angle, terms);

    printf("The sine of %.2lf radians is %.6lf\n", angle, sine);

    return 0;
}
