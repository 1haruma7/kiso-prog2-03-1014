// 練習問題：整数を入力したら、正負を逆転した値を表示する
// ただし * 演算子と - 演算子を使用しないこと
//
// ヒント：前回の2の補数「0と1を反転して、1を足す」
// 確かめ方：5 → -5、-12 → 12、0 → 0 になればOK
#include <stdio.h>

int main(void)
{
    int num;
    int inverse_num;

    printf("整数=");
    scanf("%d", &num);

    inverse_num = 0;   /* ここを書き換える */

    printf("正負逆転した値は%dです。\n", inverse_num);
    return 0;
}
