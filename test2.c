#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    // Loop to extract digits and calculate sum
    while (num != 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit
    }
    return sum;
}
int main() {
    int number, result;
    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    // Ensure the number has 5 digits
    if (number < 10000 || number > 99999) {
        printf("Please enter a valid five-digit number.\n");
    } else {
        // Call function to calculate sum of digits
        result = sumOfDigits(number);
        // Output the result
        printf("Sum of digits: %d\n", result);
    }
    return 0;
}
