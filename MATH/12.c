
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    //float v2 = 30*2.54;

    while(scanf("%d", &n) != EOF){
        printf("%d\n", (int) (n*100)/23.8+0.9);


    }

    return 0;
}


