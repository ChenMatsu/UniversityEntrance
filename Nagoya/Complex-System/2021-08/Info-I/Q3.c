#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2022年度博士前期課程入試問題　情1−3
 * ---問題---
 * ベクトルの内積を計算して標準出力に表示するプログラムを再帰的プログラミングによってC言語で作成した。
 * 下線部を適切に埋めよ。
 */

/**
 * @Note 很簡單的計算內積 透過遞迴的方式計算
 */
double f(double a[], double b[], int n)
{
    if (n > 1)
    {
        return (a[n - 1] * b[n - 1] + f(a, b, n - 1));
    }
    else
    {
        // return (a[n - 1] * b[n - 1]);
        return a[0] * b[0];
    }
}

int main(void)
{
    int n = 5;

    double a[] = {5.0, 4.0, 3.0, 2.0, 1.0};
    double b[] = {1.0, 10.0, 100.0, 1000.0, 10000.0};

    printf("%lf\n", f(a, b, n));
    return 0;
}