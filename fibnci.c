#include <stdio.h>

int main() {
    int i, b[20];
    int a = 10; // Initialize a with the desired number of Fibonacci terms

    b[0] = 0;
    b[1] = 1;
    for(i = 2; i < a; i++) {
        b[i] = b[i-1] + b[i-2];
    }

    // Print the generated Fibonacci sequence
    for(i = 0; i < a; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
