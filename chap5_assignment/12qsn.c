#include <stdio.h>
int main() {
    int guess, num = 8;
printf("Enter the guess:");
scanf("%d", &guess);
     while (guess!=0) {
        
        if (guess == num) {
            printf("Correct!");
           break;
        } else
            printf("Try again\n");
            break;
    }
    return 0;
}