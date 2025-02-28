#include<stdio.h>
int lar(int a, int b, int c){
    if(a>b && a>c)
    return a;
    else if(b>c && b>a)
    return b;
    else if(c>b && c>a)
    return c;
 }

 int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d""%d""%d",&a,&b,&c);
    int x = lar(a,b,c);
    printf(x);
 }