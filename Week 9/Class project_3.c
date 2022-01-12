//
// Created by uwagbalegeorge on 05/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char profession[30], level[30];
    int experience;
    char professions[4][7][30] = {
            {"Office Administrator",
             "Intern",
             "Administrator",
             "Senior Administrator",
             "Office Manager",
             "Director",
             "CEO"
            },
            {
                "Academic",
                "-",
                "Research Assistant",
                "PhD Candidate",
                "Post-Doc Researcher",
                "Senior Lecturer",
                "Dean"
            },
            {
                "Lawyer",
                "Paralegal",
                "Junior Associate",
                "Associate",
                "Senior Associate 1-2",
                "Senior Associate 3-4",
                "Partner"
            },
            {
                "Teacher",
                "Placement",
                "Classroom Teacher",
                "Senior Teacher",
                "Leading Teacher",
                "Deputy Principal",
                "Principal"
            }
    };

    printf("Enter profession: ");
    scanf("%30s", profession);
    printf("Enter level: ");
    scanf("%30s", level);
    // strlwr(profession);
    printf("Years of experience: ");
    scanf("%d", &experience);

    for (int i=0; i<4; i++){
        for (int j=0; j<7; j++){
            if (!strcasecmp(profession, professions[i][j]) ){
                if (!strcasecmp(level, professions[i][1])){
                    if (experience>=1 && experience <=2 ) printf("APS 1-2");
                    else if (experience>=2 && experience<=5) printf("APS 3-5");
                    else if (experience>=6 && experience<=8) printf("APS 6-8");
                    else if (experience>=9 && experience<=10) printf("EL1 8-10");
                    else printf("SES");
                }
                else if(!strcasecmp(level, professions[i][2])){
                    if (experience>=1 && experience <=2 ) printf("APS 1-2");
                    else if (experience>=2 && experience<=5) printf("APS 3-5");
                    else if (experience>=6 && experience<=8) printf("APS 6-8");
                    else if (experience>=9 && experience<=10) printf("EL1 8-10");
                    else printf("SES");
                }
                else if(!strcasecmp(level, professions[i][3])){
                    if (experience>=1 && experience <=2 ) printf("APS 1-2");
                    else if (experience>=2 && experience<=5) printf("APS 3-5");
                    else if (experience>=6 && experience<=8) printf("APS 6-8");
                    else if (experience>=9 && experience<=10) printf("EL1 8-10");
                    else printf("SES");
                }
                else if(!strcasecmp(level, professions[i][4])){
                    if (experience>=1 && experience <=2 ) printf("APS 1-2");
                    else if (experience>=2 && experience<=5) printf("APS 3-5");
                    else if (experience>=6 && experience<=8) printf("APS 6-8");
                    else if (experience>=9 && experience<=10) printf("EL1 8-10");
                    else printf("SES");
                }
                else if(!strcasecmp(level, professions[i][5])){
                    if (experience>=1 && experience <=2 ) printf("APS 1-2");
                    else if (experience>=2 && experience<=5) printf("APS 3-5");
                    else if (experience>=6 && experience<=8) printf("APS 6-8");
                    else if (experience>=9 && experience<=10) printf("EL1 8-10");
                    else printf("SES");
                }
                else if(!strcasecmp(level, professions[i][6])){
                    if (experience>=1 && experience <=2 ) printf("APS 1-2");
                    else if (experience>=2 && experience<=5) printf("APS 3-5");
                    else if (experience>=6 && experience<=8) printf("APS 6-8");
                    else if (experience>=9 && experience<=10) printf("EL1 8-10");
                    else printf("SES");
                }

            }
        }
    }

    return 0;
}