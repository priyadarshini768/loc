#include<stdio.h>
#include<string.h>
void main(){
    char arr[100],str[100];
    int i;
    gets(arr);
    gets(str);
    strcat(arr,str);
    int k=strlen(arr);
    for(i=k-1;i>=0;i--){
        printf("%c",arr[i]);
    }
}