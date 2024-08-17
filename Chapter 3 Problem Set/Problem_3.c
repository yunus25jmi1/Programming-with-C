#include <stdio.h>

int main(){
    int income_amount , tax_amount ;
    printf("Enter the income amount: ");
    scanf("%d", &income_amount);

    if (income_amount<=250000){
        tax_amount = 0;
        printf("You don't have to pay tax.\n");
    }
    else if(income_amount>250000 && income_amount<=500000){
        tax_amount = 0.05 * income_amount;
        printf("You have to pay tax of %d\n", tax_amount);
    }
    else if(income_amount>500000 && income_amount<=1000000){
        tax_amount = 0.20 * income_amount;
        printf("You have to pay tax of %d\n", tax_amount);
    }
    else{
        tax_amount = 0.30 * income_amount;
        printf("You have to pay tax of %d\n", tax_amount);
    }
}