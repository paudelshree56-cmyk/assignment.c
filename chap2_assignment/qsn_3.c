#include<stdio.h>
int main(){
    
    float l, b;
    float area;
    float perimeter;
    printf("Enter length and breadth:");
    scanf("%f%f",&l,&b);
    area= l*b;           //formula to calculate area
    perimeter= 2*(l+b);  //formula to calculate perimeter
    printf("The area of rectangle is=%f\n",area);
    printf("The perimeter of rectangle is=%f",perimeter);
    return 0;
}