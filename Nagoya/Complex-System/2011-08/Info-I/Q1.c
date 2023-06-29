#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2012年度博士前期課程入試問題　情1-1
 *
 * ---問題---
 * 次のプログラムの表示結果を示せ
 */
int main(void)
{
    int a = 0x468a;
    char b[] = "pqrstu";

    /**
     * @Note 給定題目執行會出現無排序問題 意味著會因不同編譯器而有所差異 因此此處分開寫原則上具備與題目一樣概念
     */
    // printf(" %x\n %x\n, %x\n", a++, ++a, a--); // 0x468a 0x468c 0x468c
    printf(" %x\n", a++);
    printf(" %x\n", ++a);
    printf(" %x\n", a--);
    printf(" %c\n %s\n", b[3], &b[2]); // s and rstu
    return 0;
}