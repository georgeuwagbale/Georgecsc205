// Created by georgeuwagbale on 10/11/2021
// MIT Licensed

#include <stdio.h>

int main(){
	int age;
	char experienced;

	printf("Enter age: ");
	scanf("%3i", &age);
	fflush(stdin);

	printf("Experienced? (Y/N): ");
	scanf("%c", &experienced);
	fflush(stdin);
	
	if ( experienced == 'y' || experienced == 'Y' ){
		if ( age > 40) printf("Salary = N560,000.");
		else if ( age >= 30 && age < 40 ) printf("Salary = N480,000");
		else if ( age < 28 ) printf("Salary = N300,000");
	}
	else if( experienced == 'n' || experienced == 'N'){
		printf("Salary = N100,000.");
	}
	return 0;
}