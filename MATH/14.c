
#include <stdio.h>
#include <math.h>
int main() {
     int n;
    //float v2 = 30*2.54;

    while(scanf("%d", &n) != EOF){
        printf("%d days\n", n/(60*60*24));
        n= n%(60*60*24);
        printf("%d hours\n", n/(60*60));
        n = n%(60*60);
        printf("%d minutes\n", n/60);

        printf("%d seconds\n", n%60);


    }

    return 0;
}



