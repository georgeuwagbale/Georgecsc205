// Created by georgeuwagbale on 20/11/2021
// MIT Licensed

#include <stdio.h>
#include <pthread.h>

void* thread(){

	printf("Thread...\n");
}

int main(){
	// Create thread id
	pthread_t id;
	int ret;
	
	ret = pthread_create(&id, NULL, &thread, NULL);
	if (ret == 0) printf("Process created successfully\n");
	return 0;
}
