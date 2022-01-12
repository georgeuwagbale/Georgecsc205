// Created by georgeuwagbale on 24/11/2021
// MIT Licensed

#include <stdio.h>

void menu(int data);
int total = 0;
char orders[100];
int p=0;
int f=0;
int a=0;
int e=0;
int w=0;
int main(){
	char flag;
	int number_of_order = 0;
	char order;
	do{
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

		menu(number_of_order);

		printf("Do you want to make another order (y/n): ");
		fflush(stdin);
		scanf("%c", &flag); 
	}
	while (flag == 'y');
	
	return 0;
}


void menu(int data){
	int n = 0;
	int number_of_orders = data;
	while (n <= number_of_orders ){
		switch(orders[n]){
			case 'p':
				printf("Poundo Yam/Edin kaiko Soup\n");
				//scanf("%d", &quantity);
				total += 3200; 
				break;
			
			case 'f':
				printf("Fried Rice & Chicken\n");
				//scanf("%d", &quantity);
				total += 3000;
				break;
			
			case 'a':
				printf("Amala & Ewedu Soup\n");
				total += 2500;
				break;

			case 'e': 
				printf("Eba & Egusi Soup\n");
				total += 2000;
				break;

			case 'w':
				printf("White Rice & Stew\n");
				total += 2500;
				break;
		}
	n++;
	}
	printf("Total = N%d\n", total);
}
