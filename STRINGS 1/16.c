#include <stdio.h>

int main(){
    char in[5];
    while(scanf("%s",in) != EOF){
        printf("%c   %c   %c   %c   %c\n",in[0],in[1],in[2],in[3],in[4]);
    }
    return 0;
}
