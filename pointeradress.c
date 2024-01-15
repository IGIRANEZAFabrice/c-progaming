#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,c;
	c = 10;
	c = 5;
	p = &c;
	printf("the value of pointer is %d\n",*p);
	printf("the c value is %d\n",c);
	printf("the adress is %d\n",p);
	return 0;
}
