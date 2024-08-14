#include <stdio.h>
int main(){
    // calculating area of a rectangle
    int l,b,area;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breadth:");
    scanf("%d",&b);
    area = l * b;
    printf("area = %d", area);
    return(0);
}
