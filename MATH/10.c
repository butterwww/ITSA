
#include <stdio.h>
#include <math.h>
int main() {
    float n;

    while(scanf("%f", &n) != EOF){

        n = n*9/5+32;
        n = (int)(n*10+0.5)/(10/1.0);

        printf("%.1f\n", n);
    }

    return 0;
}

