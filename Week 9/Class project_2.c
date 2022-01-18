//
// Created by uwagbalegeorge on 04/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct employee_profile{
    char first_name[50];
    char last_name[50];
    int years_of_experience;
}*ptr, *m;
struct employee_profile * max(struct employee_profile *a, struct employee_profile *b);


int main(){
    int amount_of_applicants, n;
    char val;
    //char first_name[50], last_name[50];
    //int years_of_experience;


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

        m = (ptr + 0);
        for (int i=0; i<amount_of_applicants-1; i++){
            // printf("%d; %d\n", r, j);
            m = max( m,(ptr + (i+1)));
            // printf("%d\n", r);
        }

        printf("Applicant with the highest experience: %s %s \n",m->first_name,m->last_name);
        printf("Experience in years: %d", m->years_of_experience);
    }

    return 0;
}

struct employee_profile * max(struct employee_profile *a, struct employee_profile *b){
    struct employee_profile *c = a;
    if (a->years_of_experience > b->years_of_experience) return a;
    else if( a->years_of_experience < b->years_of_experience) return b;
    else return c;
}

