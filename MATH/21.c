
#include <stdio.h>
#include <math.h>
int main() {
    long long int n = 0;
    long long int tmp;
    while(scanf("%d", &n) != EOF){
        tmp = n;
        for(int i = 1; i<tmp; i++){

            n = n*i;
        }
        printf("%lld\n", n);
    }

    return 0;
}



