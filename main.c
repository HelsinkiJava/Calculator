#include <stdio.h>

int main() {
    double numOne;
    double numTwo;
    printf("Enter first number: ");
    scanf("%lf", &numOne);
    printf("Enter second number: ");
    scanf("%lf", &numTwo);
    printf("Answer: %f", numOne + numTwo);
    return 0;
}
