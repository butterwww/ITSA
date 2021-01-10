#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char in[260] = {0};
    int l;
    for(int i=0;i<n;i++){
        scanf("%s",in);
        l = strlen(in);
        for(int j=l-1;j>=0;j--){
            printf("%c",in[j]);
        }
        printf("\n");
    }
    return 0;
}
