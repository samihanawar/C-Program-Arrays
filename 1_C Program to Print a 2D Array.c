#include<stdio.h>
main(){
    int i,j;
    int arr[3][4];
    printf("Enter the elements:\n");
     for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            {
                scanf(" %d ", &arr[i][j]);
            }
        }
    printf("The array is :\n");
    for(i=0;i<3;i++)
        {
        for(j=0;j<4;j++)
            {
                printf(" %d ", arr[i][j]);
            }

        printf("\n");
        }
        return 0;
}
