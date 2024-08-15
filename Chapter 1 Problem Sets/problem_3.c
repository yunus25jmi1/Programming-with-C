#include <stdio.h>

int main(){
    int temp_in_c , temp_in_f , calculation;
    printf("Enter the temp in celsius: ");
    scanf("%d", &temp_in_c);
    
    calculation = (temp_in_c * 9 / 5) + 32;
    printf("The temperature in fahrenhiet is : %d\n",calculation);
    return 0;
}