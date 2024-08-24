#include <stdio.h>

int main(){
    int i = 5;
    i = i+5;
    printf("The Value of i is %d\n", i); // 10
    printf("The Value of i is %d\n", ++i); // 11
    /*
    i++ prints i first and then increments (Post increment Operator)
    ++i prints increments of i first and then prints (Post increment Operator)
    */
    printf("The Value of i is %d\n", i++); //11
    printf("The Value of i is %d\n", i); //12

    i +=2; // same as i = i+2
    printf("The value of i is %d\n", i); // 13

    return 0;
}