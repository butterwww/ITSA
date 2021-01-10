#include <stdio.h>

int main() {
    int time;
    float money = 0.0;
    while(scanf("%d", &time) != EOF){

        if(time<=800){
            money = time*0.9;
            printf("%.1f\n", money);
        }
        else if(time<1500){

            money =(float) time*0.9*0.9;
            printf("%.1f\n", money);
        }
        else{
            money = time*0.9*0.79;
            printf("%.1f\n", money);
        }
    }

    return 0;
}
