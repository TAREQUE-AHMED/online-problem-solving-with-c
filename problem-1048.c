#include <stdio.h>

int main() {
    double salary, new_salary, money_earned;
    int increase_percentage;

    // Reading employee's salary
    scanf("%lf", &salary);

    // Calculating new salary and increase percentage based on the table
    if (salary <= 400.00) {
        increase_percentage = 15;
    } else if (salary <= 800.00) {
        increase_percentage = 12;
    } else if (salary <= 1200.00) {
        increase_percentage = 10;
    } else if (salary <= 2000.00) {
        increase_percentage = 7;
    } else {
        increase_percentage = 4;
    }

    money_earned = salary * increase_percentage / 100.0;
    new_salary = salary + money_earned;

    // Printing the results
    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", money_earned);
    printf("Em percentual: %d %%\n", increase_percentage);

    return 0;
}
