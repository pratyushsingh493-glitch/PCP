#include <stdio.h>
int main(){
    int num=0,rev_num=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Orginal number:%d\n",num);
    while(num>0){
        int digit=num%10;
        num/=10;
        rev_num=rev_num*10+digit;
    }
    printf("reversed number:%d",rev_num);
    if(rev_num==num)printf("palindrome");
    else printf("not a palindrome");
    return 0;
}