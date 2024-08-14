#include<stdio.h>
int main(){
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    for (int i = 10; i > 0; i--)
    {
        printf("%d * %d = %d\n", no, i, no * i);
    }
    return 0;
}