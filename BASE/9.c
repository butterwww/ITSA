#include <stdio.h>

int main() {
    int num, sum = 0;
    while(scanf("%d", &num)!= EOF){
        sum = 0;
        for(int i = 3; i<=num; i+=3){
            sum+=i;
        }
        printf("%d\n", sum);
    }
    return 0;
}