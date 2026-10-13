// & で最上位ビットだけを取り出し、正の数か負の数かを判定する
#include <stdio.h>

int main(void)
{
    signed char d;

    printf("整数=");
    scanf("%hhd", &d);

    if ((d & 0b10000000) == 0) {
        printf("正の数です\n");
    } else {
        printf("負の数です\n");
    }
    return 0;
}
