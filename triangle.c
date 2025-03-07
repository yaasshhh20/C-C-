#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter sides a, b, c: "); 
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) { 
        if (a == b && b == c) {
            printf("Equilateral Triangle");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle");
        } else {
            printf("Scalene Triangle");
        }
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            printf(" and Right-Angled Triangle");
        }
    } else {
        printf("Not a triangle");
    }
}