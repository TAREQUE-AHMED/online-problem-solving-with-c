#include<stdio.h>
int main(){
    int a, b, c, d;
    float price1, price2, total;
    scanf("%d %d %f", &a, &b, &price1);
    scanf("%d %d %f", &c, &d, &price2);
    total = (b * price1) + (d * price2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}