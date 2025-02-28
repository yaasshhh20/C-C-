#include<stdio.h>

int squared(int a){
    if(a>=10 && a<=100){
        return a*a;
    }else if(a<10 || a>100 ||a>__INT_MAX__){
        return -1;
    }
}

int main(){
    char a = "y";
    int x = squared(a);
    if(x==-1){
        printf("error");
    }else
    printf("%d",x);
}