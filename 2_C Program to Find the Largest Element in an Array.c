#include<stdio.h>
main(){
    int i,j;
    int arr[5][3]= {80,15,83,23,27,51,49,0,84,52,54,38,32,888};
    printf("The array is :\n");
    for(i=0;i<5;i++)
        {
        for(j=0;j<3;j++)
            {printf("%d ", arr[i][j]);}

        printf("\n");
        }
          int max=arr[0][0];
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
            if(arr[i][j]>max)
            max=arr[i][j];
    printf("\nIn the array the largest element is: %d\n",max);
}

