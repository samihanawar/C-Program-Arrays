#include<stdio.h>
main(){
    int arr[5]={44,88,55,22,66};
    int i,j,temp;
    printf("The array is: ");
    for(i=0;i<5;i++)
    { printf("%d ",arr[i]); }
    for(i=0;i<5;i++)
    { for(j=i+1;j<5;j++)
            if(arr[i]>arr[j])
        {   temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("\nThe sorted array in ascending order is: ");
     for(i=0;i<5;i++)
        {
          printf("%d ", arr[i]);
        }
}

