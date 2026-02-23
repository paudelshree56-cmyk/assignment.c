#include <stdio.h>
int fibonacci(int n);
int main() {
int n, result;
printf("Enter position (n): ");
scanf("%d", &n);
result = fibonacci(n);  
printf("Fibonacci number at position %d = %d", n, result);
return 0;}
int fibonacci(int n) {
if (n == 0){
return 0;}
else if (n == 1){
return 1;}
else{
return fibonacci(n - 1) + fibonacci(n - 2);}
}