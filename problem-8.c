#include<stdio.h>
int main(){
    int number, work_hour;
    double salary_per_hour, total_salary;
    scanf("%d %d %lf", &number,&work_hour,&salary_per_hour);
    total_salary = work_hour * salary_per_hour;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf", total_salary);
    return 0;
}