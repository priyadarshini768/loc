#include<stdio.h>

int main(){
    int reg;
    char branch[30], name[100], hobby[20];
    printf("Enter your regd num:");
    scanf("%d",&reg);
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your branch:");
    scanf("%s", branch);
    printf("Enter your hobby:");
    scanf("%s", hobby);
    printf("*-------------------------*\n");
    printf("Hello %s \nInformation you entered are\n Reg.No.: %d \n Branch: %3s \n Hobbies: %-20s", name, reg, branch, hobby);
    return 0;
}