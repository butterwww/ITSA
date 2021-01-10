
#include <stdio.h>
#include <math.h>
int main() {
    int word[1024];
    for(int i = 0; i<6; i++){
        scanf("%d", &word[i]);
    }
    for(int i = 5; i>=1; i--){
        printf("%d ", word[i]);
    }
    printf("%d\n", word[0]);

    return 0;
}


