#include <stdio.h>

int main(){
    char character;
    printf("Enter the character:");
    scanf("%c",&character);

    if(character>=97 && character<=122){
        printf("This character is in lowercase.\n");
    }
    else if (character>65 && character<=90){
        printf("The character is Uppercase.\n");
    }
    else{
        printf("This is not in lowercase.\n");
    }
    return 0;
}