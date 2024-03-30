#include <stdio.h>

int main() {
    int month;
    
    // Input
    scanf("%d", &month);
    
    // Check if the input is within the valid range
    if (month < 1 || month > 12) {
        printf("Invalid input\n");
        return 1; // Exit with error
    }
    
    // Array to store month names
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    
    // Output
    printf("%s\n", months[month - 1]);
    
    return 0;
}
