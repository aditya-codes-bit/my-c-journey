// #include<stdio.h>

// int main()
// {
//     int lenght=2,breathe=3,area;
//     area = lenght * breathe;
//     printf("The Area Of The Rectangle Is: %d", area);
//     return 0;
// }

#include<stdio.h>

int main()
{
    int area,length,breathe;
    printf("Enter The Length Of The Reactangle:");
    scanf("%d", &length);
    printf("Enter The Breathe Of The Rectangle:");
    scanf("%d", &breathe);
    area = length * breathe;
    printf("The Area Of The Reactangle Is: %d",area);
    return 0;
}
