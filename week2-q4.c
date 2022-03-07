#include<stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int i,sum;

    for(i=1;i<=n;i++){
        printf("%d\n",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;

    }