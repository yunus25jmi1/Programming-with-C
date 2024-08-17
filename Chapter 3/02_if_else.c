#include <stdio.h>

int main(){
    int age = 15;

    if(age < 10){
        
        printf("We are inside if\n"); // Removed extra argument
        printf("Your age is greater than 10.\n");
    }
    else{
        printf("You age is not greater than 10.\n");
    }
    return 0;
}