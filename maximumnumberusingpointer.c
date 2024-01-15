#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int max = (*ptr1 > *ptr2) ? *ptr1 : *ptr2;

    printf("%d is the maximum number.\n", max);

    return 0;
}

