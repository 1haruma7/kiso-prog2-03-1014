// 1 << n で「n番目だけ1」のビットを作り、8個のLEDの点灯状態を1つの変数で操作する
#include <stdio.h>

void show(unsigned char leds)
{
    for (int i = 7; i >= 0; i--) {
        printf("%s", (leds & (1 << i)) ? "●" : "○");
    }
    printf("\n");
}

int main(void)
{
    unsigned char leds = 0;

    leds = leds | (1 << 0);    /* 0番目を点ける */
    show(leds);
    leds = leds | (1 << 2);    /* 2番目を点ける */
    show(leds);
    leds = leds & ~(1 << 0);   /* 0番目を消す */
    show(leds);
    return 0;
}
