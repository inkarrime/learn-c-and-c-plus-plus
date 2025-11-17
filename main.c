#include<stdio.h>
#define PI 3.14159
int main()
{
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    float volumen = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("volume is : %.2f\n\n", volumen );
    return 0;
}