#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, num;

    printf("Number of values : ");
    scanf("%d", &num);

    int values[num];

    printf("Input %d values:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &values[i]);
    }

    int min = values[0];
    int max = values[0];

    for ( i = 1; i < num; i++) {
        if (values[i] < min) {
            min = values[i];
        }

        if (values[i] > max) {
            max = values[i];
        }
    }

    printf("Minimum value is: %d\n", min);
    printf("Maximum value is: %d\n", max);

    return 0;
}

