#include <stdio.h>

int main() {
    float A, B, C;
    
    // Reading the three floating point numbers
    scanf("%f %f %f", &A, &B, &C);
    
    // Check if it is possible to form a triangle
    if (A + B > C && A + C > B && B + C > A) {
        // If it's possible, calculate the perimeter
        float perimeter = A + B + C;
        printf("Perimetro = %.1f\n", perimeter);
    } else {
        // If it's not possible, calculate the area of the trapezium
        float area = ((A + B) * C) / 2.0;
        printf("Area = %.1f\n", area);
    }
    
    return 0;
}
