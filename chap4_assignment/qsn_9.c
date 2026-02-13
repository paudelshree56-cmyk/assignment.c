#include <stdio.h>
int main() {
float i,n;
float sum=0, avg, x;
printf("Enter numbers:");
 scanf("%f",&n);
for (i = 0; i < n; i++) {
scanf("%f", &x);
sum+=x;}
avg= sum/n;
printf("Average=%f", avg);
printf("For deviation:\n");
for (i = 0; i < n; i++)
scanf("%f",&x);
  printf("Deviation = %f\n", x - avg);
return 0;
}