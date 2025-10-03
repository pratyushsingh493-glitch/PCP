#include <stdio.h>
int main(){
    int a,p=1;
    printf("Enter Digit\n");
    scanf("%d",&a);
    while(a>0){
        p=p*(a%10);
        a=a/10;
    }
    printf("Product of digits is:%d",p);
    return 0;
}