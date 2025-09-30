#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int divisor = 2;  // fixed: non-zero divisor

    if (divisor == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 1;  // exit early
    }

    for (int i = 0; i < 5; i++) {
        int result = numbers[i] / divisor;
        printf("numbers[%d] / %d = %d\n", i, divisor, result);
    }

    return 0;
}
