#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (islower(ch)) {
        printf("%c is a lowercase character.\n", ch);
    } else {
        printf("%c is a uppercase character.\n", ch);
    }
    return 0;
}