#include <stdio.h>
int main(){
    // by do while
    int sum=0,i=1 ;
    do{    
        sum += i ;
        i++;
    } while (i<11);
    printf("%d",sum);
    return 0;
}