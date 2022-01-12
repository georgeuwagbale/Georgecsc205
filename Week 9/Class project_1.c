//
// Created by uwagbalegeorge on 04/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int row = 3, col =2;
    float *x, *y, *z;
    char n[2];
    x = (float *) malloc(row * col * sizeof(float ));
    y = (float *) malloc(row * col * sizeof(float));
    z = (float *) malloc(row * col * sizeof(float ));


    /*
     * *(x + 0)  = 667; *(x + 1) = 422;
    *(x + 2) = 233; *(x + 3) = 515;
    *(x + 4) = 183; *(x + 5) = 335;

    *(y + 0) = 100; *(y + 1) = 151;
    *(y + 2) = 245; *(y + 3) = 312;
    *(y + 4) = 333; *(y + 5) = 578;
     */

    printf("Enter values for X\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf(": ");
            //scanf("%s", n);
            //*(x +i*col +j) = atoi(n);
             scanf("%f", (x +i*col + j));
            fflush(stdin);
        }
        //puts(" ");
    }

    printf("Enter values for Y\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf(": ");
            //scanf("%s", n);
            //*(y +i*col +j) = atoi(n);
            scanf("%f", (y +i*col + j));
            fflush(stdin);
        }
        //puts(" ");
    }

    printf("X = \n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%f  ", *(x +i*col + j));
        }
        puts(" ");
    }

    printf("Y = \n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%f  ", *(y +i*col + j));
        }
        puts(" ");
    }

    printf("\nX + Y = \n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            *(z +i*col + j) = *(x +i*col + j) + *(y +i*col + j);
        }
    }

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%f ", *(z +i*col + j));
        }
        puts("");
    }


    return 0;
}