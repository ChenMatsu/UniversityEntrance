#include <stdio.h>
#include <math.h>

/**
 * 名古屋大学　大学院情報学研究科　2010年度博士前期課程入試問題　情1-4
 *
 * ---問題---
 * 零ベクトルでない２つのn次元ベクトルのなす角度を求めるプログラムを作成
 * した。各ベクトルの値はサイズnの倍精度実数配列aとbに格納されている。値
 * xの平方根と逆余弦は、それぞれ関数sqrt(X)とacos(x)で与えられる。括弧
 * 内に入れるべき式、または式の一部を答えよ。
 */
int main()
{
    int i, n = 3;
    double a[] = {1, 2, 3}, b[] = {2, -1, 1}, sa = 0.0, sb = 0.0, prod = 0.0;
    for (i = 0; i < n; i++)
    {
        sa += a[i] * a[i];
        sb += b[i] * b[i];
        prod += a[i] * b[i];
    }
    printf("%lf ", acos(prod / (sqrt(sa) * sqrt(sb))));
    printf("\n");
    return 0;
}