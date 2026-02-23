#include <stdio.h>
int isPrime(int n);

int main() {
    int num, result;
printf("Enter a number: ");
scanf("%d", &num);
result = isPrime(num);  
if (result == 1){
        printf("Prime number");}
    else{
printf("Not a prime number");}
return 0;
}


int isPrime(int n) {
    int i;
if (n<= 1)
        return 0;
 for (i=2; i<n; i++) {
        if (n % i==0){
return 0;}
return 1;}
}