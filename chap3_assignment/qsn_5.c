// to read full line of text
#include <stdio.h>
int main() {
    char text[100];
   printf("Enter a line:");
   fgets(text,sizeof(text),stdin);
   printf("You entered:%s",text);
    return 0;
}