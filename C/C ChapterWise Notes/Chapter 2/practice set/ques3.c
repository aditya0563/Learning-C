#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%97==0)
    {
        printf("it is divisible by 97");
    }
    else
    {
        printf("it is not divisible by 97");
    }
    return(0);
}