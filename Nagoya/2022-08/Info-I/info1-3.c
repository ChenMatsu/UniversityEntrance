#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2023年度博士前期課程入試問題　情1−3
 */
int f(char *a, int n)
{
    if (*a == '\0') // '\0' 表示字串的結尾
    {
        return n;
    }
    else
    {
        return f(a + 1, n + 1); // 字串 + 1 代表移動至下一個字元
    }
}

int main(void)
{
    int n = 0;
    char a[] = "This is a pen.";

    printf("%d\n", f(a, n));
    return 0;
}