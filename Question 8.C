#include <stdio.h>

int main() {
    int n, sum = 0, sign = 1;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += sign * i;
        sign *= -1;
    }
    
    printf("The sum of 1-2+3-4+5...%d is %d\n", n, sum);
    
    return 0;
}
