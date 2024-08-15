#include <stdio.h>

int main(){
    int a , b;
    printf("Enter the Length of rectangle : ");
    scanf("%d", &a);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &b);
    int area = a * b;
    printf("The area of rectangle is %d",area);
}