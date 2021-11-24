// Created by georgeuwagbale on 24/11/2021
// MIT Licensed

#include <stdio.h>

int main(){
	int total = 0;
	int quantity;
	int number_of_order = 0;
	char order;
	char orders[100];
	printf("---WELCOME TO MAMA CAS RESTAURANT---\n");
	printf("Menu\t\t\t\t\tPrice\n");
	printf("P = Poundo Yam/Edin kaiko Soup\t\t-N3,200\n");
	printf("F = Fried Rice & Chicken\t\t\t-N3,000\n");
	printf("A = Amala & Ewedu Soup\t\t\t-N2,500\n");
	printf("E = Eba & Egusi Soup\t\t\t-N2,000\n");
	printf("W = White Rice & Stew\t\t\t-N2,500\n");
	printf("Make your order -enter n to finish order -: \n");

	do{
		scanf("%c",&order);
		if ( order != 'n') orders[number_of_order] = order;
		number_of_order+=1;
	}
	while (order != 'n');
	printf("%d\n", number_of_order);
	
	int n = 0;
	while (n <= number_of_order ){
		switch(orders[n]){
			case 'p':
				//int price = 3200;
				printf("Poundo Yam/Edin kaiko Soup\n");
				//scanf("%d", &quantity);
				total += 3200; 
				//* quantity;
				break;
			
			case 'f':
				//int price = 3000;
				printf("Fried Rice & Chicken\n");
				//scanf("%d", &quantity);
				total += 3000;
				break;
			
			case 'a':
				//int price = 2500;
				printf("Amala & Ewedu Soup\n");
				//scanf("%d", &quantity);
				total += 2500;
				break;

			case 'e': 
				//int price = 2000;
				printf("Eba & Egusi Soup\n");
				//scanf("%d", &quantity);
				total += 2000;
				break;

			case 'w':
				//int price = 2500;
				printf("White Rice & Stew\n");
				//scanf("%d", &quantity);
				total += 2500;
				break;

			//default:
			//	printf("Invalid input");
			//	break;

		}
	n++;

	}

	printf("Total = %d", total);
	
	return 0;
}