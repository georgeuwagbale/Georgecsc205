// Created by georgeuwagbale on 20/11/2021
// MIT Licensed

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* sims();

int main(){
	// Creation of thread ID
	pthread_t ID;
	int ref;
	
	ref = pthread_create(&ID, NULL, &sims, NULL);
	pthread_join(ID, NULL);
	return 0;
}


void* sims(){
	char student_name[100];
	long student_matric_number;
	
	printf("Enter your name: ");
	scanf("%99s", student_name);
	
	printf("Enter matric number: ");
	scanf("%11ld", &student_matric_number);
	

	int me;
	me = pthread_self();
	
	printf("Thread ID: %d;\nStudent Name: %s;\nMatric Number: %ld;\n", me, student_name, student_matric_number);
}
