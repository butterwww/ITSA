#include <stdio.h>

int main() {
    int start_h, start_m, end_h, end_m;
    int time;
    scanf("%d %d %d %d", &start_h, &start_m, &end_h, &end_m);
        time = (end_h*60+end_m)-(start_h*60+start_m);

        if(time<=120){

            printf("%d\n", time/30*30);
        }
        else if(time<=240){

            printf("%d\n", 120+(time-120)/30*40);
        }
        else{

            printf("%d\n", 120+160+(time-240)/30*60);
        }


    return 0;
}
