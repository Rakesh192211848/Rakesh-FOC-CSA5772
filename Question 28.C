#include <stdio.h>
#include <math.h>

double cosine(double x, int terms) {
    double sum = 1.0; // Initialize sum with the first term (1.0)
    double numerator = 1.0; // Numerator of the next term
    int sign = -1; // Sign of the next term

    for (int i = 1; i <= terms; i++) {
        numerator *= x * x; // Calculate the numerator of the next term
        double denominator = 2 * i * (2 * i - 1); // Calculate the denominator of the next term
        double term = numerator / denominator; // Calculate the next term
        term *= sign; // Apply the sign to the term
        sum += term; // Add the term to the sum
        sign *= -1; // Toggle the sign for the next term
    }

    return sum;
}

int main() {
    double angle, result;
    int n;

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    result = cosine(angle, n);

    printf("The cosine of %lf radians is %lf\n", angle, result);

    return 0;
}
