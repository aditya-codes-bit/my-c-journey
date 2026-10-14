#include<stdio.h>

int main()
{
    float C;
    printf("Enter C:");
    scanf("%f", &C);
    // printf("Enter F:");
    // scanf("%f",&F);
    printf("The F= %f", ((9.0/5.0)*C)+32.0);
    return 0;
}