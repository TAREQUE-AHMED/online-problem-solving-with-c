#include <stdio.h>

int main() {
    int A, B;
    
    // Reading the two integer values
    scanf("%d %d", &A, &B);
    
    // Check if A is a multiple of B or vice versa
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    
    return 0;
}
