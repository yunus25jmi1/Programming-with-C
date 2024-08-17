#include <stdio.h>

int main(){
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks<100 && marks>=90){
        printf("You scored A grade.\n");
    }
    else if (marks<=90 && marks>=80){
        printf("You scored B Grade.\n");
    }
    else if (marks<=80 && marks>=70){
        printf("You scored C grade.\n");
    }
    else if (marks<=70 && marks>=60){
        printf("You scored D grade.\n");
    }
    else if (marks<=70 && marks>=60){
        printf("You scored E grade.\n");
    }
    else{
        printf("You scored F Grade.\n");
    }
    return 0;
}