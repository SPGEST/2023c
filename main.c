#include <stdio.h>
#include "mymath.h"

int main() {
    int num1 = 22;
    int num2 = 33;

    printf("Sum of %d and %d is: %d\n", num1, num2, add(num1, num2));

    return 0;
}