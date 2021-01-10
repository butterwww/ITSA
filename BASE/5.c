#include<stdio.h>
int main(void)
{
    int i=0,n,a[8];

    while(scanf("%d",&n) != EOF){
        if(n>0){// 正數
            for (int i = 7; i >= 0; i--) {
                a[i] = n % 2;
                n = n / 2;
            }

            for (i = 0; i < 8; i++)
                printf("%d", a[i]);
            printf("\n");
        }
        else{// 負數
            n = 0-n;// 絕對值
            for (int i = 7; i >= 0; i--) {
                a[i] = n % 2;
                n = n / 2;
            }
            // 二進位取反
            for (i = 0; i < 8; i++){
                if(a[i] == 0)
                    a[i] = 1;
                else
                    a[i] = 0;
            }
            int plus = 1;   // +1
            for(int i = 7; i>=0; i--){
                if(plus == 1 && a[i] == 1){
                    a[i] = 0;
                    plus = 1;
                }
                else if(plus == 1 && a[i] == 0){
                    a[i] = 1;
                    plus = 0;
                }

            }

            for (i = 0; i < 8; i++)
                printf("%d", a[i]);
            printf("\n");
        }

    }
    return 0;
}