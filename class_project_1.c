// Created by georgeuwagbale on 20/11/2021
// MIT Licensed

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* sims();

int main(){
	// Creation of thread ID
	pthread_t ID;
	int ref, amount_of_student;
	
	printf("How many students: ");
	scanf("%d", &amount_of_student);
	
	for (int i = 0; i < amount_of_student; i++){
		ref = pthread_create(&ID, NULL, &sims, NULL);
		pthread_join(ID, NULL);
	}

	return 0;
}


void* sims(){
	int amount_of_student;
	int me;
	me = pthread_self();
		
	char student_name[100];
	int student_matric_number;	
	
	printf("Enter your name: ");
	scanf("%99s", student_name);
	
	printf("Enter matric number: ");
	scanf("%d", &student_matric_number);
	puts("");
	
 	printf("Thread ID: %d;\nStudent Name: %s;\nMatric Number: %d\n\n", me, student_name, student_matric_number);
	
}
