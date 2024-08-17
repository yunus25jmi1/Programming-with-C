#include <stdio.h>

int main(){
    int age = 15;

    if(age > 10){
        printf("We are inside if\n"); // Removed extra argument
        printf("Your age is greater than 10.\n");
    }

    if(age % 5 == 0){
        printf("We are inside if\n"); // Added missing semicolon
        printf("Your age is a greater of 10.\n"); // Corrected the message for clarity
    }
    return 0;
}