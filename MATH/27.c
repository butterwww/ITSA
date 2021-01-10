
#include <stdio.h>
#include <math.h>
int main() {
    long long int a = 0, b = 0;
    long long int res = 0;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a>b){
            int temp;
            temp = a;
            a= b;
            b= a;
        }
        for(int i = a; i<=b; i++){
            res += i;
        }
        printf("%lld\n", res);
    }

    return 0;
}




