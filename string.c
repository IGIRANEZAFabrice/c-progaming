#include <stdio.h>
#include <stdlib.h>
#include <string.h+]>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[20];
	char b[20];
	printf("Enter your name: ");
	fgets(a,sizeof(a),stdin);
	puts(a);
	strcpy(b,a);
	printf("the string B is :");
	puts(b);
	
	return 0;
}
