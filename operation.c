#include <stdio.h>
#include <math.h>
int main(){
    int T1,T2,T3,A,B,C,D;
    printf("Enter the vanues of A,B,C & D\n");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    T1=(--A + B++)/(C--*D--);
    T2=T1*T1*T1;
    T3=sqrt((double)T2/T1);
    printf("T1=%d,T2=%d,T3=%d,A=%d,B=%d,C=%d,D=%d",T1,T2,T3,A,B,C,D);
    return 0;
}