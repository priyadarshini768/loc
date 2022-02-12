#include<stdio.h>

int main(){
    int a, res;
    printf("Enter a number:");
    scanf("%d", &a);
    res=a%2;
    switch(res){
        case 0:{
            printf("Even Number");
            break;
        }
        case 1:{
            printf("Odd Number");
            break;
        }
    }
    return 0;
}