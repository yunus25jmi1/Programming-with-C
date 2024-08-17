#include <stdio.h>

int main(){
    int age = 55;
    if(age>60){
        printf("You can drive legally but you are senior citizen.\nPrefer drive with family member.\n");
    
    }
    else if(age>45)
    {
        printf("You can drive legally and elder.\n");
    }
    else if(age>18)
    {
        printf("You can drive legally.\n");
    }
    else{
        printf("You cannot drive and you are minor.\n");
    }
    
    return 0; 

}