#include <stdio.h>
float circleArea(float radius);
int main() {
    float r, area;
printf("Enter radius:");
scanf("%f", &r);
area =circleArea(r);
 printf("Area of circle = %f", area);
return 0;
}
float circleArea(float radius) {
    float area;
    area = 3.14*radius*radius;
    return area;
}