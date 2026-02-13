#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    int palindrome = 1;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++) {
    if(str[i] == '\n') {
        str[i] = '\0';
        break;
    }
}
   while(str[length] != '\0') 
    length++;

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            palindrome = 0; 
            break;
        }
    }