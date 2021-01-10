#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == 0){
        if(b == 0){
            printf("Origin");
        }else{
            printf("y-axis");
        }
    }else if(b == 0){
        printf("x-axis");
    }else if(a > 0){
        if(b > 0)
            printf("1st Quadrant");
        else
            printf("4th Quadrant");
    }else if(a < 0){
        if(b > 0)
            printf("2nd Quadrant");
        else
            printf("3rd Quadrant");
    }

    printf("\n");
    return 0;
}
