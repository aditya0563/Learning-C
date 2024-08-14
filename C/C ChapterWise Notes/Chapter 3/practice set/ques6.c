#include <stdio.h>
int main() {
    int no, times;
    printf("How many numbers to check: ");
    scanf("%d", &times);
    int greatest = 0;
    for (int i = 0; i < times; i++) {
        printf("Give a number: ");
        scanf("%d", &no);
        if (no > greatest) {
            greatest = no;
        }
    }
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
