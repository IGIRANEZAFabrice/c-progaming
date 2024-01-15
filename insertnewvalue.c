#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i , n, value, pos;

    printf("Insert New value in the sorted array:\n");
    printf("-----------------------------------------\n");

    printf("Input the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Input %d elements in the array in ascending order:\n", n);
    for ( i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    pos = n;
    while (pos > 0 && arr[pos - 1] > value) {
        arr[pos] = arr[pos - 1];
        pos--;
    }


    arr[pos] = value;

    printf("The exist array list is:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("After Insert the list is:\n");
    for ( i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

