#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    for (int i = 0; i < n; i++) {
        arr = (int *)malloc(10 * sizeof(int));
        if (!arr) return 1;

        arr[i] = i * 2;
        printf("arr[%d] = %d\n", i, arr[i]);

        free(arr); 
    }

    return 0;
}
