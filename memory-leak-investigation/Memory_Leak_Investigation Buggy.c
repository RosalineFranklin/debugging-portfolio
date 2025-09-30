#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    for (int i = 0; i < n; i++) {
        arr = (int *)malloc(10 * sizeof(int));  
        arr[i] = i * 2;
        printf("arr[%d] = %d\n", i, arr[i]);
   
    }

    return 0;
}
