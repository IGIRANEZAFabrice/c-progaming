#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,n, value, pos;

    printf("Insert New value in the array (unsorted list):\n");
    printf("----------------------------------------------\n");

    printf("Input the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Input %d elements in the array:\n", n);
    for ( i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;

    printf("The current list of the array:\n");
    for ( i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

