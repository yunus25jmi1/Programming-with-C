#include <stdio.h> 

int main(){
    int a; // Declare an integer variable 'a'
    
    // Prompt the user to enter a value for 'a'
    printf("Enter a :");
    
    // Read the integer value entered by the user and store it in 'a'
    scanf("%d",&a);

    // Switch statement to handle different values of 'a'
    switch(a){
        case 1:
            // If 'a' is 1, print "You entered 1"
            printf("You entered 1\n");
            break; // Exit the switch statement
        case 2:
            // If 'a' is 2, print "You entered 2"
            printf("You entered 2\n");
            break; // Exit the switch statement
        case 3:
            // If 'a' is 3, print "You entered 3"
            printf("You entered 3\n");
            break; // Exit the switch statement
        case 4:
            // If 'a' is 4, print "You entered 4"
            printf("You entered 4\n");
            break; // Exit the switch statement
        default:
            // If 'a' is not 1, 2, 3, or 4, print "You entered something else"
            printf("You entered something else\n");
    }
}