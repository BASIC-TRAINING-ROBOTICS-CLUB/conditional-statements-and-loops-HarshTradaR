#include <stdio.h>
#include <ctype.h>  

int main() {
    char a;
    
    printf("Enter a character: ");
    scanf("%c", &a);

    a = tolower(a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("This is a vowel.");
    } else {
        printf("This is not a vowel.");
    }

    return 0;
}