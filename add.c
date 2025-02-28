//write a pgm that accepts values in inches and converts them in cms
// 1 inch = 2.54cm
#include <stdio.h>
int main(){
    float num;
    int whole;
    float decimal;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    whole = (int)num;                 
    decimal = num - whole;            
    printf("Whole number part: %d\n", whole);
    printf("Decimal part: %.2f\n", decimal);
}
