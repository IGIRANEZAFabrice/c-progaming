#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    char str[100];
    int vowels = 0, consonants = 0;
    char *ptr;

    printf("Input a string: ");
    scanf("%s", str);

    ptr = str;
    while (*ptr != '\0') {
        char ch = tolower(*ptr);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        ptr++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

