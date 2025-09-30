#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int divisor = 0;  // oops, dividing by zero!

    for (int i = 0; i < 5; i++) {
        int result = numbers[i] / divisor;  // crash happens here
        printf("numbers[%d] / %d = %d\n", i, divisor, result);
    }

    return 0;
}
