#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,n;
    while(scanf("%d",&n)!=EOF){

        for(i=2; i<n; i++){
            if(n%i==0){
                printf("NO\n");
                break;
            }
        }
        if(i==n)
            printf("YES\n");
    }
    return 0;
}
