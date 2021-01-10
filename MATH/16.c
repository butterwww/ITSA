#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    while(scanf("%d %d", &x, &y)!= EOF){
        if(sqrt((x-0)*(x-0)+(y-0)*(y-0))>100){
            printf("outside\n");
        }
        else{
            printf("inside\n");
        }
    }
    return 0;
}
