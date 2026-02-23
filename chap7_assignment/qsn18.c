#include <stdio.h>
void calculate(int a, int b, int *sum, int *diff, int *prod);
int main() {
    int x, y, sum, diff, prod;
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
 calculate(x, y, &sum, &diff, &prod);
 printf("Sum = %d\n", sum);
 printf("Difference = %d\n", diff);
 printf("Product = %d\n", prod);
return 0;}
void calculate(int a, int b, int *sum, int *diff, int *prod) {
*sum = a + b;
*diff = a - b;
*prod = a * b;
}