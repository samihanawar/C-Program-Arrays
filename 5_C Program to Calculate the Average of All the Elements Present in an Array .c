#include<stdio.h>
main(){
    int sum;
    int arr[10];
    float average;
    int i,j;
    printf("Enter the elements:\n");
    for(i=0;i<10;i++)
    {scanf("%d",&arr[i]);}
    for(j=0;j<10;j++)
    sum=sum+arr[j];
    average=sum/7;
    printf("\nThe average is:%f\n",average);
}

