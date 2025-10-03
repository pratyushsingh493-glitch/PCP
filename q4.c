#include <stdio.h>
int main(){
    int num=0;
    printf("Enter a number\n");
    scanf("%d",& num);
    if(num>0){
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}
