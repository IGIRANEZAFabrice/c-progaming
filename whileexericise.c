#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i = 0;
	printf(":");
	scanf("%d",&n);
	while(i<=n){
			printf("%d \n",n-i);
		i++;
	}	
	return 0;
}
