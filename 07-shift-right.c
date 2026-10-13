// 同じビット列 1111 1100 を、符号付きと符号なしで右シフトしたときの違いを確かめる
#include <stdio.h>

int main(void)
{
    signed char s = -4;      /* 1111 1100 */
    unsigned char u = 252;   /* 1111 1100 */

    printf("%d %d\n", s >> 2, u >> 2);
    return 0;
}
