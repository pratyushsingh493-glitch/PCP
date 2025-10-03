#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the 3 sides of a triangle \n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1*s1 +s2*s2)==s3*s3 || (s2*s2 +s3*s3)==s1*s1 || (s1*s1 +s3*s3)==s2*s2){
        printf("It is a right angled triangle");
    }else{
        printf("It is not a right angled triangle");
    }
    return 0;
}