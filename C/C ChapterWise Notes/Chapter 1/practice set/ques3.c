#include <stdio.h>
int main(){
    float c,conversion;
    printf("Enter the temp(in celciius):");
    scanf("%f",&c);
    conversion = 1.8 * c + 32 ;
    printf("temp in farenthite = %f", conversion);
    return(0);
}