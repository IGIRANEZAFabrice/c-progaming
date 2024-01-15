#include<stdio.h>

main()
{
	printf (" hey there !\n");
	printf ("getting started with c !\n");//printf to print any thing
	/*now im getting started with c programing and 
	track my progress from now it is easy 
	*/
	//to de crele a variable
	int myNumbers = 15;
	//you can also declare a variable and then assgn a value to it later
	float myNum;
	myNum = 12 ;
	//if you printf the variable only nothing will happen even if it is assgned to a value 
	
	printf("%f \n",myNum);
	printf("%i\n", myNumbers);
	
	const int mynumbe = 3;
	/*if you assgn the number to the contans variable it will give you an error
	int myNumber = 2;

	and there are types of conversion -implicity conversion and 
	- explicity conversion
	implicity is done automatically while explicity is done manually
	*/
	int x = 3;
	int y = 4;
	
	printf("%d\n", x+y);	
	
	printf("%d\n", y>x);
	
	//boolean returns if the function assgned true is treu or false by 1 and 0
	
	/*bool isProgramingLove = true;
	bool isProgramingHate = false;
	
	printf("%d\n", p\isProgramingLove);
	
	printf("%d\n", isProgramingHate);*/
	
			
	return 0;
}
