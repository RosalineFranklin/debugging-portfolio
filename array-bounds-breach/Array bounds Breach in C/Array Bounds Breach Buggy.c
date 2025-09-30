#include <stdio.h>

int main() {
    int arr[5];  
    for (int i = 0; i <= 10; i++) {
        arr[i] = i * 3; 
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
