#include<stdio.h>
main(){
    int ar1[3][2]={1,2,3,4,5,6};
    int ar2[3][2]={9,8,7,6,5,4};
    int res [3][2];
    int i, j;
    printf("The 1st Matrix is:\n");
    for (i = 0; i <3 ; i++) {
        for (j = 0; j <2 ; j++)
            printf("%d ", ar1[i][j]);
        printf("\n");
    }
    printf("The 2nd Matrix is:\n");

    for (i = 0; i <3 ; i++) {
        for (j = 0; j <2 ; j++)
            printf("%d ", ar2[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            res[i][j] = ar1[i][j] + ar2[i][j];
    printf("The summation Matrix of given two Matrix :\n");

    for (i = 0; i <3 ; i++) {
        for (j = 0; j <2 ; j++)
            printf("%d ", res[i][j]);
        printf("\n"); }
}



