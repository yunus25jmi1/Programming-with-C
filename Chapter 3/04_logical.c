#include <stdio.h>

int main(){
    int a=0 ; int b=1;
    printf("The value of a and b is %d.\n", a&&b);
    printf("The value of a or b is %d.\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if(a){
        if(b){
            printf("both are true\n");}
        else{
            printf("both are not true.");
        }      
        }
        
    return 0; 

}