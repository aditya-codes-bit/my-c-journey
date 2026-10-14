// #include<stdio.h>

// int main()
// {
//     float radius;
//     printf("The Radius Of The Circle:");
//     scanf("%f", &radius);
//     printf("The Area Of The Circle Is: %f", 3.14*radius*radius);
//     return 0;
// }

#include<stdio.h>

int main()
{
    float radius,height;
    printf("The Radius Of The Circle:");
    scanf("%f", &radius);
    printf("Enter The Height Of The Cylinder:");
    scanf("%f", &height);
    printf("The Volume Of The Cylinder Is: %f", 3.14*radius*radius*height);
    return 0;
}