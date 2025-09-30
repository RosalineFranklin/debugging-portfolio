#include <stdio.h>

int main() {
    int arr[5]; 
    int n = 5;

    for (int i = 0; i < n; i++) { 
        arr[i] = i * 3;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
