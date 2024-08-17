#include <stdio.h>

int main(){
    int marks_percentage_1 , marks_percentage_2 , marks_percentage_3 , total_percentage ;
    printf("Enter the percentage of subject 1: ");
    scanf("%d", &marks_percentage_1);
    printf("Enter the percentage of subject 2: ");
    scanf("%d", &marks_percentage_2);
    printf("Enter the percentage of subject 3: ");
    scanf("%d", &marks_percentage_3);

    total_percentage = (marks_percentage_1 + marks_percentage_2 + marks_percentage_3) /3;

    if(marks_percentage_1>33){
        printf("You are passed the subject 1 with percentage of %d\n" , marks_percentage_1);}
    else{
            printf("You are failed in subject 1 due to less marks.\n");
    }
    
    if(marks_percentage_2>33){
        printf("You are passed the subject 2 with percentage of %d\n" , marks_percentage_2);
    }
    else{
            printf("You are failed in subject 2 due to less marks.\n");
    }
    if(marks_percentage_3>33){
        printf("You are passed the subject 3 with percentage of %d\n" , marks_percentage_3);
    }
    else{
            printf("You are failed in subject 3 due to less marks.\n");
    }
    if (total_percentage<40){
        printf("You failed the exam due to less marks.\n");
    }
    else if (total_percentage>=40){
        printf("You passed the exam with percentage of %d\n",total_percentage);
    }

    return 0;
}