#include <stdio.h>

int main() {
   int n, i, sum=0;
   
   printf("Enter the number of terms: ");
   scanf("%d", &n);

   for(i=1; i<=n; i++) {
      if(i%2 != 0) {
         sum += i;
      }
   }

   printf("The sum of first %d odd numbers is %d.", n, sum);

   return 0;
}
