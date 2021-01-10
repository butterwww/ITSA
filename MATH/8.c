
#include <stdio.h>
#include <math.h>
int main() {
    int n, m;
    int res;

    while(scanf("%d %d", &n, &m) != EOF){
        res = n+m;

        printf("%d\n", res*res);
    }

    return 0;
}


