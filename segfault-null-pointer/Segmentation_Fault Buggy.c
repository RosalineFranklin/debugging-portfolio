#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;  
    int n = 5;

    for (int i = 0; i < n; i++) {
        ptr[i] = i * 3;  
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    return 0;
}
