// Created by georgeuwagbale on 10/11/2021
// MIT Licensed

#include <stdio.h>


int main(){
	int age;
	printf("Input your age: ");
	scanf("%4i", &age);
	puts("");
	
	if ( age > 18 ) printf("You can vote");
	else if ( age < 18) printf("You cannot vote");
	return 0;
}