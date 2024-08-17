#include <stdio.h>
int main(){
    int number_1 , number_2 , number_3 , number_4 ;

    printf("Enter the first Number : ");
    scanf("%d", &number_1);
    printf("Enter the second Number : ");
    scanf("%d", &number_2);
    printf("Enter the third Number : ");
    scanf("%d", &number_3);
    printf("Enter the forth Number : ");
    scanf("%d", &number_4);

    if(number_1>number_2 && number_1>number_3 && number_1>number_4){
        printf("The greatest number is %d", number_1);
    }
    else if (number_1<number_2 && number_2>number_3 && number_2>number_4){
        printf("The greatest number is %d", number_2);
    }
    else if (number_1<number_3 && number_2<number_3 && number_3>number_4){
        printf("The greatest number is %d", number_3);
    }
    else{
        printf("The greatest number is %d", number_4);
    }

    return 0;
}