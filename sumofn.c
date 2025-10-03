#include <stdio.h>
int main(){
    int sum=0,n=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of %d naturals is :%d",n,sum);

    return 0;
}