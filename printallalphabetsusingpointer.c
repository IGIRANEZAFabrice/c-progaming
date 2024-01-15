#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char alphabets[26];
    char *ptr;
    int i;
    for ( i = 0; i < 26; i++) {
        alphabets[i] = 'A' + i;
    }

    ptr = alphabets;

    printf("The Alphabets are:\n");

    for ( i = 0; i < 26; i++) {
        printf(" %c ", *ptr);
        ptr++;
    }

    return 0;
}

