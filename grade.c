#include <stdio.h>
int main(){
    int sum=0;
    printf("Enter marks of 5 subjects\n");
    for(int i=1;i<=5;i++){
        printf("Enter marks of subject %d\n",i);
        int marks;
        scanf("%d",&marks);
        sum+=marks;
    }
    float percentage=sum/5.0;
    printf("Your Percentage:%f\n",percentage);
    int pointer=percentage/10;
    printf("Your Pointer:%d\n",pointer);
    if(pointer>=6){
        printf("Your grade is:%c\n",'E'-(pointer-5));
    }
    else if(pointer==5 || pointer==4){
        printf("Your grade is:E\n");
    }
    else{
        printf("Your grade is:Fail\n");
    }
    return 0;
}