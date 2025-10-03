#include <stdio.h>
void arrow(){
    for(int i=1;i<=20;i++){
        if(i==1 || i==2 || i==20){
            printf(">");
        }
        else{
            printf("-");
        }
    }     
    return;
}

int main() {
    for(int i=1;i<=100;i++){//upper row
        if(i<=60 && i>40){
            printf(" ");
            continue;
        }
        printf("_");
    }
    printf("\n");
    for(int i=1;i<=10;i++){//mid rows
        printf("|");
        for(int j=2;j<100;j++){
            if(j==40 || j==61){
                printf("|");
                continue;
            }
            if(j==41 && i==6){
                arrow();
                j=60;
            }
            

            printf(" ");
        }
        printf("|");
        
        printf("\n");
    }
    for(int i=1;i<=100;i++){//bottom row
        
        if(i<=60 && i>40){
            printf(" ");
            continue;
        }if(i==1 || i==40 || i==61 || i==100){
            printf("|");
        }
        else{
            printf("_");
        }
    }
    return 0;
}