#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    ptr = (int *)malloc(n * sizeof(int));  
    if (!ptr) {  
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i * 3;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);  
    return 0;
}
