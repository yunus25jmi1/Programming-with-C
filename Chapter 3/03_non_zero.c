#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed!\n");
    }
    if(2345){
        printf("This if is executed!\n");
    }

    if('a'){
        printf("This if is executed!\n");
    }

    if(0){
        printf("This if is not executed because it is non-zero."); // Added missing semicolon
        /*
        zero is never execute in if control statement.
        */
    }
    return 0;
}