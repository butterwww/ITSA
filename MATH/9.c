

#include <stdio.h>
#include <math.h>
int main() {
    int n;
    long long int res = 1;

    while(scanf("%d",&n) != EOF){
        if(n>31){
            printf("Value of more than 31\n");

        }
        else{
            for(int i = 0; i<n; i++){
                res = res *2;
            }
            printf("%d\n", res);
        }

    }

    return 0;
}


