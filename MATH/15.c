
#include <stdio.h>
#include <math.h>
int main() {
    int h, w;


    while(scanf("%d %d", &h, &w) != EOF){
        if(h<=100&& w<=100 && h>=0 &&w>=0){
            printf("inside\n");
        }
        else
            printf("outside\n");
    }

    return 0;
}



