// a program to display the line using formatted output
#include <stdio.h>
int main() {
    char line[100];
    printf("Enter line: ");
    fgets(line, sizeof(line), stdin);
printf("Formatted output:\n");
    printf("line:%s",line);
    return 0;
}