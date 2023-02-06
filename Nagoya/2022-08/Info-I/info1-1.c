#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2023年度博士前期課程入試問題　情1−１
 * ---問題---
 * 次のC言語プログラムの標準出力への表示結果を示せ
 */
int main(void)
{
    int x1 = 4321, x2 = 0xf0f0;
    /**
     *  Decimal Hexical
     *  4321 -> 10e1
     *  61680 <- 0xf0f0  (15 * 16 + 15 * 16^3 = 240 + 61440 = 61680) [0x單純用於表示為16進位制]
     */

    printf("%x\n", x1);      // 由10進位制轉至16進位制
    printf("%d\n", x1 + x2); // x2轉換至10進位制後與x1相加
    printf("%d\n", x1 & x2); //
    printf("%x\n", x1 >> 4); // ">>" & "<<" 主要功能為移動變數中的所有位元向左或向右　=> 等同於4321 / 2^4後再轉成16進位制

    return 0;
}
