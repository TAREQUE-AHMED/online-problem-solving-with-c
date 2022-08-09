#include<stdio.h>
int main(){
    float time, speed, result, distance;
    scanf("%f %f", &time, &speed);
    distance = time * speed;
    result = distance / 12.0;
    printf("%.3f\n", result);
    return 0;
}