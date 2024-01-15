#include <stdio.h> 
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("color b");
	int n,i=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
			printf("%d \n",i);
		i++;
	}	
	return 0;
}
