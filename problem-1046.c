#include <stdio.h>

int main() {
    int start, end, duration;
    
    // Reading start and end time
    scanf("%d %d", &start, &end);
    
    // Calculating duration of the game
    if (start < end) {
        duration = end - start;
    } else {
        duration = 24 - start + end;
    }
    
    // Printing the duration
    printf("O JOGO DUROU %d HORA(S)\n", duration);
    
    return 0;
}
