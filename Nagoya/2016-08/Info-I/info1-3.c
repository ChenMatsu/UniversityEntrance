#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2017年度博士前期課程入試問題　情1−5
 *
 * ---問題---
 * 大きさがnである整数型１次元配列aの各要素に任意の整数が代入されている。
 * 配列aの各要素の中の最大値を求める関数func2を、再帰的プログラミングにより
 * C言語で作成した。作成した関数func2は、a, nを引数として受け取り、配列aの
 * 各要素の中の最大値を返り値として返す。下線部を適切に埋めよ。
 *
 */

/**
 * @Note 本質上是Divide and Conquer演算法的實作
*/
int func2(int a[], int n)
{
    int v1, v2;
    if (n == 1)
    {
        return a[0];
    }
    else
    {
        v1 = func2(a, n - 1);
        v2 = a[n - 1];
        if (v1 > v2)
        {
            return v1;
        }
        else
        {
            return v2;
        }
    }
}

/**
 * @Note Testing
 */
int main()
{
    int nums[] = {1, 3, 654, 8, 66, 299};

    printf("%d\n", func2(nums, 6));
    return 0;
}