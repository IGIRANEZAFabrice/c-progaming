#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,n;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d number of elements in the array:\n", n);
    for ( i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements you entered are:\n");
    for ( i = 0; i < n; i++) {
        printf("element - %d : %d\n", i, *(arr + i));
    }

    return 0;
}

