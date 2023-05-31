#include <stdio.h>
#include <stdlib.h>

/**
 * 名古屋大学　大学院情報学研究科　2013年度博士前期課程入試問題　情1-5
 *
 * ---問題---
 * 大きさnの整数型1次元配列aの各要素のち、整数xと等しくない要素の総和を
 * 求める関数fnc2を再帰的プログラミングで作成した。関数fnc2は、a, n, x
 * を引数として受け取り、演算結果を返す。下線部に入れるべき式、または式の
 * 一部を答えよ。ここで、同じ番号の括弧には同じ式、または式の一部が入る。
 */

int fnc2(int a[], int n, int x)
{
    if (n > 0)
    {
        if (a[n - 1] != x)
        {
            return a[n-1] + fnc2(a, n - 1, x);
        }
        else
        {
            return fnc2(a, n - 1, x);
        }
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int nums[] = {10, 22, 5, 7, 9, 12, 12, 8, 12, 6, 21, 11, 29};
    printf("%d\n", fnc2(nums, sizeof(nums) / sizeof(int), 12));
    return 0;
}