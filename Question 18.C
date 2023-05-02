#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter an integer number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        sum += num % 10;  // add the last digit to the sum
        num /= 10;       // remove the last digit from the number
    }
    
    printf("The sum of the digits is: %d", sum);
    
    return 0;
}
