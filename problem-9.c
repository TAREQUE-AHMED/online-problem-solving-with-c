#include<stdio.h>
int main(){
        char name[30];
        double fixed_salary, total_sell, total_salary;
        scanf("%c", name);
        scanf("%lf %lf", &fixed_salary, &total_sell);
        total_salary = fixed_salary + (0.15 * total_sell);
        printf("TOTAL = R$ %.2lf", total_salary);
        return 0;
}