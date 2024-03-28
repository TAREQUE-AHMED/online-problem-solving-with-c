#include <stdio.h>
#include <math.h>

void sort(double *a, double *b, double *c) {
    double temp;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a < *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b < *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    double A, B, C;
    
    // Reading the three sides of the triangle
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Sorting sides in decreasing order
    sort(&A, &B, &C);
    
    // Checking the type of triangle
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2))
            printf("TRIANGULO RETANGULO\n");
        if (pow(A, 2) > pow(B, 2) + pow(C, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(A, 2) < pow(B, 2) + pow(C, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
            printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}
