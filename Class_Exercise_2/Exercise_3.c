// Created by georgeuwagbale on 10/11/2021
// MIT Licensed

#include <stdio.h>

int main(){
	char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	char user_input;

	printf("Enter a character between A - J: ");
	scanf("%c", &user_input);
	fflush(stdin);
	
	for ( int n=0; n <= 9; n++){
		
		if ( user_input == alphabets[n]){
			int a = n + 1;
			int value = a + 5;

			for ( a; a<= value; a++){
				printf("%c\n", alphabets[a]);
			}break;
		}
			
	}
	
	return 0;
}