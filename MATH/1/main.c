#include <stdio.h>

int main() {
    int up , down, height;
    float res;
    while(scanf("%d %d %d", &up, &down, &height) != EOF){
        res = (float)(up+down)*height/2;
        printf("Trapezoid area:%.1f\n", res);
    }

    return 0;
}