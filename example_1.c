#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, total_percentage, percentage1, percentage2, percentage3;
    printf("Enter 1st Subject Marks:");
    scanf("%f", &marks1);
    printf("Enter 2nd subject Marks:");
    scanf("%f", &marks2);
    printf("Enter 3rd subject marks:");
    scanf("%f", &marks3);
    total_percentage = (marks1 + marks2 + marks3) / 3.0;
    if (total_percentage >=40.0 && marks1>=33 && marks2>=33 && marks3>=33)
    printf("You Have Passed The Exam!");
    else
    printf("You Have Failed The Exam!");
    return 0;
}