#include <stdio.h>
#include <stdlib.h>

/**
 * 名古屋大学　大学院情報学研究科　2010年度博士前期課程入試問題　情1-2~3
 */

/*
 * [2]関数maxswapは、サイズmの整数型配列変数aと整数型変数n(2<=n<=m)を受け
 *    取り、a[0],a[1],...,a[n-1]のうちで最大値を格納する要素の要素番号を
 *    整数型変数imaxに代入する。続いて、変数aのimax番目の要素とa[n-1]の値
 * 　　を交換する。下線部に記載するべき式、または式の一部を答えよ。
 */

int maxswap(int a[], int n)
{
    int i, imax, max;
    imax = 0;
    for (i = 0; i < n; i++)
    {
        if (a[imax] < a[i])
            imax = i;
    }
    max = a[imax];
    a[imax] = a[n - 1];
    a[n - 1] = max;
    return 0;
}

/**
 * [3]問題[2]の関数maxswapを用いて整数型配列変数aの要素を昇順に並べるかえる
 * 　　プログラムを作成した。下線部に記載するべき式、または式の一部を答えよ。
 */

int main(void)
{
    int a[] = {1, 20, -3, 100, 5, -6, 8, -10}, n = 8, i;
    for (i = 0; i < n; i++)
        maxswap(a, n - i);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
