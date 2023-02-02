#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2022年度博士前期課程入試問題　情1−2
 */
int main(void)
{
    char s[] = "This is a pen";

    int n = 0;

    char *p;
    p = s;             // s為字元陣列 => 陣列所代表的已經是記憶體位址 所以不需要添加&
    while (*p != '\0') // 若非結束字元 繼續執行
    {
        if (*p == ' ') // 若讀取空白字元
        {
            n++;
        }
        p = p + 1; // 跳到下一個記憶體位址 這裡的1會對應類別Char所佔用的位元數/位元組
    }

    printf("%d\n", n);
    return 0;
}
