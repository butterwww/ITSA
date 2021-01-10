

#include <stdio.h>
#include <math.h>
int main() {
    float n;

    while(scanf("%f", &n) != EOF){

        n = (int)(n*n*10+0.5)/(10/1.0);
        printf("%.1f\n", n);
    }

    return 0;
}
