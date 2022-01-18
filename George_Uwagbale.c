/*
Paystack is a technology company solving payment problems for ambitious businesses.
With tentacles across African countries with over 25,000 merchants, 
Paystack faces the challenge of monitoring the operations of some of their merchants. 
As an intern developer, you have been asked to write a C program that monitors the operations by taking in any number
 of operations requested that will generate a multithreaded system that outputs the thread ID and the operation(s) entered in a multiple of 2. 
Some operation challenges are:

Online fraud
Chargeback
Payment gateway challenges
Continuous update
User experience challenges
Multi-currency payment
*/

#include <stdio.h>
#include <string.h>

void test(char names[][30], int num);

int main(){

    char names[2][30] = {
            "George",
            "Uwagbale",
    };
    int num = 5;
    test(names, num);
    puts("");
    for (int i=0; i<2; i++){
        printf("%s\n", names[i]);
    }
    printf("\n%d", num);
    return 0;
}

void test(char names[][30], int num){
    for (int i=0; i<2;i++){
        strcpy(names[i], "John Doe");
        // names[i] = "John Doe";
        printf("%s\n", names[i]);
    }
    num = 8;
    printf("%d", num);
}