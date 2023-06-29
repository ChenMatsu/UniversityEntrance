#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2010年度博士前期課程入試問題　情1-1
 *
 * ---問題---
 * C言語で記述された以下のプログラムの画面出力結果を示せ
 */
int main()
{
    int a, b;
    a = 1.5;
    b = 9.7;
    printf("%d\n", a++);    // 1 => a will add 1 after printf
    printf("%d\n", b % a);  // 1 => a is now two
    printf("%d\n", b >> 2); // 2
    return 0;
}