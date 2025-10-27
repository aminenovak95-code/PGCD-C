#include <stdio.h>
int main() {
    int a, b, r;
 printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
 printf("\nEuclid's algorithm steps:\n");
    while (b != 0) {
        r = a % b;
        printf("%d = %d × %d + %d\n", a, b, a / b, r);
        a = b;
        b = r;
    }
 printf("\nThe GCD is: %d\n", a);
  return 0;
}
