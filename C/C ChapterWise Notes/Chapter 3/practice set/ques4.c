#include <stdio.h>
int main(){
    int yr;
    printf("enter the year:");
    scanf("%d",&yr);
    if (yr%4==0){
        printf("it is a leap year");
    }else{
        printf("this is not a leap year");
    }
    return(0);
}