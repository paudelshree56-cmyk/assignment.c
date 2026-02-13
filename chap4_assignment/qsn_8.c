#include<stdio.h>
int main(){
    float cost, salvage, life, depreciation;
    printf("Enter cost price, salvage, life(years):");
    scanf("%f%f%f", &cost,&salvage,&life);
    depreciation=(cost-salvage)/life;
    printf("%f is depreciation", depreciation);
    return 0;
}