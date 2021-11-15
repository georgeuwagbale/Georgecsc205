// Created by georgeuwagbale on 15/11/2021
// MIT Licensed

#include <stdio.h>

int main(){
	
	// Definition of & declaration of variables
	int value, size;
	int count = 0;

	// The ASCII code for the input is stored in value
	printf("Input a value: ");
	value = getchar();
	size = sizeof(value);
	printf("ASCII code for %c is %d\n", value, value);
	
	switch(size){
		case 1:
			while (count <=4){
				count ++;
				value += 3;
				printf("The following ASCII codes of %c are %d\n", value, value);
			}
			break;
		
		case 4:
			while (count <=4){
				count ++;
				value += 3;
				printf("The following ASCII codes of %c are %d\n", value, value);
			}
			break;

	}
	return 0;
}