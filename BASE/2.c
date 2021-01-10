#include <stdio.h>

int main() {
    int input;
    double output;
    while(scanf("%d", &input) != EOF){
        output = (double)input*1.6;
        printf("%.1f\n", output);
    }

    return 0;
}