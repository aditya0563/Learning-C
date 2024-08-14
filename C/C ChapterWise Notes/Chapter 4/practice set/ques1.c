#include<stdio.h>
int main(){
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", no, i, no * i);
    }
    return 0;
}