#include <stdio.h>
#include <ctype.h>
int main() {
    char word[100]; 
    printf("Enter a word: ");
    scanf("%s", word);
    int isLowercase = 1; 
    for (int i = 0; word[i] != '\0'; i++) {
        if (!islower(word[i])) {
            isLowercase = 0; 
            break;
        }
    }
    if (isLowercase) {
        printf("%s is in lowercase.\n", word);
    } else {
        printf("%s is not in lowercase.\n", word);
    }
    return 0;
}