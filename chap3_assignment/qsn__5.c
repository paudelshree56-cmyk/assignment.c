// to count total number and spaced
#include <stdio.h>
int main() {
    char line[100];
    int i=0, characters=0,spaces=0;

    printf("Enter line: ");
    fgets(line, sizeof(line), stdin);

    while( line[i]!='\0'){
        characters++;
        if(line[i]==" "){
            spaces;}
            i++;
        }

    printf("characters=%d", characters-1);
    printf("Total  spaces: %d", spaces);
    return 0;
}