#include <stdio.h>
int main() {
    int i, t;
    printf("Enter the income: ");
    scanf("%d", &i);
    if (i > 250000 && i < 500000) {
        t = (5 * i) / 100;
    } else if (i >= 500000 && i < 1000000) {
        t = (20 * i) / 100;
    } else if (i >= 1000000) {
        t = (30 * i) / 100;
    }
    printf("Your tax to pay is %d\n", t);
    return 0;
}