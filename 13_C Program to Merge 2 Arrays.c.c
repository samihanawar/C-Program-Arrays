#include<stdio.h>
main()
{
    int i,j,result;
    int arr1[5]={0,1,2,3,4};
    int arr2[5]={5,6,7,8,9};
    result=5+5;
    int result_arr[result];
    for(i=0;i<5;i++)
    result_arr[i]=arr1[i];
    for(j=5;j<result;j++)
    result_arr[j]=arr2[j-5];
    for (i = 0; i <result; i++)
        printf("%d ", result_arr[i]);
}
