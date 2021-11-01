//
// Created by georgeuwagbale on 02/11/2021.
//

#include <stdio.h>

int main(){
    char chr;
    printf("Enter a chaaracter: ");
    scanf("%c", &chr);

    // When %c is used, a character is displayed
    printf("You entered %c\n", chr);

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.", chr);
    return 0;
}