#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[20];
	printf("enter your names: ");
	fgets(name,20,stdin);
	printf("hello %s",name);
	return 0;
}
