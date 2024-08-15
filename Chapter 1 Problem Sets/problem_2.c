#include <stdio.h>
#include <math.h>

int main(){
    int radius, height;
    double area, volume;
    printf("Enter the radius : ");
    scanf("%d", &radius);
    printf("Enter the height of cylinder : ");
    scanf("%d", &height);

    area = M_PI * radius * radius;
    volume = M_PI * radius * radius * height;
    printf("The area of circle is %f\n", area);
    printf("The volume of cylinder is %f\n", volume);

}