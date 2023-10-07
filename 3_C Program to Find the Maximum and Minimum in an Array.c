#include<stdio.h>
main(){
    int i,j;
    int arr[5][3]= {80,15,83,23,27,51,49,6,84,52,54,38,32,888,30};
    printf("The array is :\n");
    for(i=0;i<5;i++)
        {
        for(j=0;j<3;j++)
            {printf("%d ", arr[i][j]);}

        printf("\n");
        }
          int max=arr[0][0];
          int min=arr[0][0];
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
            {if(arr[i][j]>max)
            {max=arr[i][j];}
            if(arr[i][j]<min)
            {min=arr[i][j];}
            }
    printf("\nIn the array the maximum value is: %d\n",max);
      printf("\nIn the array the minimum value is: %d\n",min);
}

