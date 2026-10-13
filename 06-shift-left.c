// 左シフトで1ビットずつ左にずらし、値がどう変わるかを確かめる
#include <stdio.h>

int main(void)
{
    int a = 0b00000011;   /* 10進数で3 */

    printf("%d\n", a << 1);
    printf("%d\n", a << 2);
    printf("%d\n", a << 3);
    return 0;
}
