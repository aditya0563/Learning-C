#include <stdio.h>
int main(){
    // calculating area of a rectangle
    float r,h,area,volume;
    printf("Enter the radius:");
    scanf("%f",&r);
    printf("Enter the height:");
    scanf("%f",&h);
    area = 2 * 3.14 * r ;
    volume = 3.14 * r * r *h ;
    printf("area of circle = %f", area);
    printf("\n");
    printf("volume of cylinder = %f", volume);
    return(0);
}