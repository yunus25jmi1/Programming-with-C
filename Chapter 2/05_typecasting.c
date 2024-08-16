#include  <stdio.h>

int main(){
    int a = 4;
    int b = 2;
    float c = (float)a/b;
    int n = 45;
    float m = 32.345;
    // typecasting is done by putting the type in brackets before the variable.
    // typecasting is done to convert the variable of one type to another type.
    // typecasting is done to avoid loss of data.
    // typecasting is done to avoid truncation

    n = (int) m;
    printf("%d\n", n);
    return  0;
}