// 練習問題の解答例：* と - を使わずに、正負を逆転する（反転して1を足す）
#include <stdio.h>

int main(void)
{
    int num;
    int inverse_num;

    printf("整数=");
    scanf("%d", &num);

    inverse_num = ~num + 1;

    printf("正負逆転した値は%dです。\n", inverse_num);
    return 0;
}
