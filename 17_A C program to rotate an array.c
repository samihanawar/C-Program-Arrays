#include<stdio.h>
main(){
int arr[5]={1,2,3,4,5};
int shiftAmount,temp;
//printf("Enter the times you want to rotate this array:");
//scanf("%d",&shiftAmount);
  for (int s = 0; s < 4; s++) {
        int temp = arr[5 - 1];

        for (int i = 5 - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
    arr[0] = temp;
    }
    printf("The rotated array is :");
    for (int i=0;i<5;i++) {
    printf(" %d ",arr[i]);
    }
    printf("\n");
}
