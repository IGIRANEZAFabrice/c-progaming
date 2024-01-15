#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int balance=100000;
	system("color b");
	char dialed[25];
	char dial[25] = "*182#";
	int choice,kohereza,tel,moneysent,pin,kugura,airtime,buy,amount,pinenter,charge,newbalance,left;
	printf("dial: ");
	fgets(dialed,25,stdin);
	dialed[strlen(dialed) - 1] = '\0';
	system("cls");
	if(strcmp(dialed, dial) == 0){
		printf("1)Kohereza Amafaranga \n");
		printf("2)Kugura\n");
		printf("3)Kwishyura\n ");
		printf("4)Service za banki\n ");
		printf("5)Inguzanyo n Kuzigama \n");
		printf("6)Konti yanjye ya MoMo \n");
		printf("7)Ibyemezo bitaranozwa\n ");
		printf("8)MoMoPay\n ");
		printf("9)Sekirite Yanjye ya MoMo\n ");
		printf("10)Ubwishingizi \n");
		printf("11)Amategeko n' amabwiriza bya MoMo\n ");
		printf("12)Macye Macye\n ");
		printf("13)Babyl Health\n ");
		printf("14)Bariza Hano \n");
		printf("15)Sohokamo\n");
		scanf("%d",&choice);
		system("cls");
		switch(choice){
			case 1:
				//kohereza amafaranga
				printf("1)Uri Muri MoMo\n ");
				printf("2)Ohereza Kuri eKashi \n");
				printf("3)Kohereza Mu Mahanga\n ");
				printf("4)Tesha agaciro umubare gihamya\n ");
				printf("5)Erekana imibare gihamya igifite agaciro\n ");
				scanf("%d",&kohereza);
				system("cls");
				if(kohereza==1){
					printf("Nomero ya Mobile(Format )07********\n");
					scanf("%d",&tel);
					system("cls");
					printf("Emeza umubare w'amafaranga ajya kuri IGIRANEZA Fabrice 0%d  \n ",tel);
					scanf("%d",&moneysent);
					system("cls");
					if(moneysent<=1000){
						charge = 20;
					}
					else if (moneysent>1000 && moneysent<=5000){
						charge= 150;
					}
					else if(moneysent>5000 && moneysent<=10000){
						charge = 200;
					}
					else if(moneysent>10000 && moneysent<=50000){
						charge = 300;
					}
					printf("Washyizeho: IGIRANEZA Fabrice, 0%d , %d Rwf.ikiguzi cya %d kirakurikizwa.Kwemeza Kohereza amafanga ku bakoresha Mobile Shyiramo PIN\n",tel , moneysent,charge);
					scanf("%d",&pin);
					system("cls");
					if(pin==1111){
						printf("\nThank you for using MoMo.You will get a confirmation message sholtly!");
						sleep(3);
						system("cls");
						newbalance=balance-moneysent-charge;
						printf("\nYour new balance is %d ",newbalance);
						getch();
					}
					else{
						printf("invalid PIN");
					}
				}
			break;
			
			case 2:
				//kugura
				printf("1)Kugura Amainite,Pack zo Guhamagara na Interinet\n");
				printf("2)Kugura umuriro \n");
				printf("3)Pay sevices\n ");
				printf("4)Solar\n ");
				printf("5)Busi Tap&Go\n ");
				printf("6)Kugurura kuri Murandasi\n ");
				scanf("%d",&kugura);
				system("cls");
				if(kugura==1){
					printf("1)MTN Airtime\n");
					printf("2)Internet Bundles\n");
					printf("3)MTN SupaPacks\n");
					printf("4)Voice and Data Bundles\n");
					printf("5)work at home bundles\n");	
					scanf("%d",&airtime);
					system("cls");
					switch(airtime){
						case 1:
							printf("Normal Airtime\n");
							printf("1)Buy for self\n");
							printf("2)Buy for others\n");
							scanf("%d",&buy);
							system("cls");
							if(buy==1){
								//kwigurira inite
								printf("Enter Amount\n");
								scanf("%d",&amount);
								system("cls");
								printf("You have entered: %d RWF.A Fee of 0 will be applicable. To comfirm to buy MTN Airtime,enter MM PIN\n",amount);
								scanf("%d",&pinenter);
								system("cls");
								printf("You have a bonus of 20%\n ");
								sleep(2);
								system("cls");
								printf("thank you for using momo .your new balance is %d .\n",newbalance);
								sleep(2);
								printf("You will ge a comfirmation message shotly\n");
								
							}
					}
				}
			break;
		}
	}
	else{
		printf("invalid!");
	}
	
	return 0;
}
