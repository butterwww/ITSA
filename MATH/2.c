#include <stdio.h>

int main() {
    int down, height;
    float res;
    while(scanf("%d %d", &down, &height) != EOF){
        res = (float)(down)*height/2;
        printf("%.1f\n", res);
    }

    return 0;
}
