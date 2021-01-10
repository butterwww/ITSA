#include <stdio.h>
#include <string.h>

int main(){
    char s[1000] = {0};
    int l;
    int ans;
    while(scanf("%s",&s) != EOF){
        l = strlen(s);
        ans = 1;
        for(int i=0;i<l;i++){
            if(s[i] != s[l-i-1]){
                ans = 0;
                break;
            }
        }
        if(ans)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
