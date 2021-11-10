// Created by georgeuwagbale on 10/11/2021
// MIT Licensed

#include <stdio.h>

int main(){
	float csc_201, csc_205, sta_205;
	
	printf("Enter score for CSC 201: ");
	scanf("%3f", &csc_201);
	fflush(stdin);

	printf("Enter score for CSC 205: ");
	scanf("%3f", &csc_205);
	puts("");
	fflush(stdin);

	printf("Enter score for STA 205: ");
	scanf("%3f", &sta_205);
	puts("");

	float total = csc_201 + csc_205 + sta_205;
	printf("Total score = %f\n", total);
	printf("Average = %f\n", total/2);
	
	printf("---Percentage---\nCSC 201: %f\nCSC 205: %f\nSTA 205: %f", csc_201/100, csc_205/100, sta_205/100);  
	return 0;
}