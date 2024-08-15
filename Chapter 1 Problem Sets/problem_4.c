#include <stdio.h>

int main(){
    float principal , no_of_years ;
    float interest , calculation;
    printf("Enter principal amount : ");
    scanf("%f", &principal);
    printf("Enter no of years : ");
    scanf("%f", &no_of_years);
    printf("Enter the bank's interest annaully : ");
    scanf("%f",&interest);

    calculation = (principal * interest * no_of_years) / 100;

    printf("The Simple interest calculated is %f\n", calculation);
    return 0;
}