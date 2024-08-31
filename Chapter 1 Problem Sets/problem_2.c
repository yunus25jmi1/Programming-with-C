#include <stdio.h>
#include <math.h>

int main(){
    float radius, height;
    const int PI = 3.14;
    double area, volume;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    printf("Enter the height of cylinder : ");
    scanf("%f", &height);

    area = PI * radius * radius;
    volume = PI * radius * radius * height;
    printf("The area of circle is %f\n", area);
    printf("The volume of cylinder is %f\n", volume);

}