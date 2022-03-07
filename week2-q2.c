#include<stdio.h>
void main(){
    int arr[10];
    int o=0,e=0,i;
    printf("Enter the integers\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0)
        e+=arr[i];
        else
        o+=arr[i];
    }
    printf("Sum of even nos is %d",e);
    printf("\nSum of odd nos is %d",o);
}