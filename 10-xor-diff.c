// 予備：各桁が一致するところだけ0にする（xor）。もう一度 b を xor すると元に戻る
#include <stdio.h>

int main(void)
{
    int a = 0b00000011;
    int b = 0b00000110;

    int c = a ^ b;
    printf("%d\n", c);
    printf("%d\n", c ^ b);
    return 0;
}
