// ビット演算子 & で、2つの数の論理積を1桁ずつ求める
#include <stdio.h>

int main(void)
{
    int a = 0b00000011;   /* 10進数で3 */
    int b = 0b00000110;   /* 10進数で6 */
    int c = a & b;

    printf("%d\n", c);
    return 0;
}
