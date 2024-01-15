#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int evenArr[n], oddArr[n];
    int evenCount = 0, oddCount = 0;

    for ( i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    printf("The Even elements are:\n");
    for ( i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("The Odd elements are:\n");
    for ( i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}

