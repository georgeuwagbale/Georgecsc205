//
// Created by uwagbalegeorge on 04/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int amount_of_applicants, n;
    char val;
    //char first_name[50], last_name[50];
    //int years_of_experience;


    struct employee_profile{
        char first_name[50];
        char last_name[50];
        int years_of_experience;
    };
    struct employee_profile *ptr, *m;
    printf("Amount of applicants being interviewed: ");
    scanf("%2d", &amount_of_applicants);

    ptr = (struct employee_profile *) calloc(amount_of_applicants , sizeof(*ptr));
    if (ptr) {
        for (int i = 0; i < amount_of_applicants; i++) {
            printf("Enter first name: ");
            scanf("%s", (ptr + i)->first_name);

            printf("Enter last name: ");
            scanf("%s", (ptr + i)->last_name);

            printf("Enter years of experience: ");
            scanf("%d", &(ptr + i)->years_of_experience);
            puts("");
        }
        m = ptr+0;
        printf("%d", (m+2)->years_of_experience);
        for (int i=0; i<amount_of_applicants; i++){
            for (int j=0; j<amount_of_applicants; j++){
                if (((ptr + i)->years_of_experience) > ((ptr + j)->years_of_experience)){
                    ptr = (ptr + i);
                }
                else if( ((ptr + i)->years_of_experience) < ((ptr + j)->years_of_experience) ){
                    ptr = (ptr + j);
                }
            }
        }

        printf("Highest experience: %s  %s\n", (m+2)->first_name, ptr->last_name);
    }
    return 0;
}