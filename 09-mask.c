// & とマスクで、下位4ビットだけを取り出す
#include <stdio.h>

int main(void)
{
    int a = 0b01101100;
    int filter = 0b00001111;

    printf("%d\n", a & filter);   /* 2進数で0000 1100 */
    return 0;
}
