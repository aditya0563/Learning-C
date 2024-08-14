#include <stdio.h>
int main(){
    int s,p,i,t;
    printf("principal amount:");
    scanf("%d",&p);
    printf("intrest rate:");
    scanf("%d",&i);
    printf("Time(in year):");
    scanf("%d",&t);
    s = (p * i * t)/100 ;
    printf("simple intrest = %d", s);
    return(0);
}