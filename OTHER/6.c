
#include <stdio.h>
#include <math.h>
int main() {
    char word[1024][1024];
    int i = 0;
    while(scanf("%s", &word[i]) != EOF){
        i++;
    }
    for(; i>=0; i--){
        printf("%s ", word[i]);
    }
    return 0;
}

