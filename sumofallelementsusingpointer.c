#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, n;
    int arr[10];
    int sum = 0;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid input. Number of elements should be between 1 and 10.\n");
        return 1;
    }

    printf("Input %d number of elements in the array:\n", n);
    for ( i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    for ( i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("\nThe sum of array is : %d\n", sum);

    return 0;
}

