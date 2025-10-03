#include <stdio.h>
int main(){
    int first_int,secnd_int;
    char first_char,secnd_char;
    float first_float,secnd_float;
    printf("Enter 2 integer type\n");
    scanf("%d",&first_int);
    scanf("%d",&secnd_int);
    printf("Enter 2 char type\n");
    scanf("%s",&first_char);
    scanf("%s",&secnd_char);
    printf("Enter 2 float type\n");
    scanf("%f",&first_float);
    scanf("%f",&secnd_float);
    printf("%d%d%s%s%f%f\n",first_int,secnd_int,first_char,secnd_char,first_float,secnd_float);
    return 0;
}