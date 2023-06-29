#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2015年度博士前期課程入試問題　情1-1
 *
 * ---問題---
 * 次のC言語プログラムの出力結果を示せ
 */
int main(void)
{
    int a = 0x0f0f, b = 0x1234;
    char s[] = "abcd";
    printf("%d %x %x %x %c\n", a, a << 3, a | b, a ^ b, s[1]);
    return 0;
}