#include <stdio.h>
int main(){
    int c;
    printf("Enter initial concentration of bacteria\n");
    scanf("%d",&c);
    printf("growth of bacteria at the end of 3 hours:%f",c*(1+5.0/100)*(1+5.0/100)*(1+5.0/100));
    return 0;
}