#include <stdio.h>
#define N 10
/**
 * 名古屋大学　大学院情報学研究科　2012年度博士前期課程入試問題　情1-3
 *
 * ---問題---
 * n行n列の正方行列のすべての要素の和を計算する関数fnc2を作成せよ。正方
 * 行列の要素は実数型２次元配列aに代入される。fnc2は、aとbの大きさnを引
 * 数として受け取り、演算結果をreturn文で返す。aの最大サイズをNとする。
 * ただし、n<=Nである。fnc2を利用するmain関数を以下に示すので、これに
 * あわせてfnc2を作成せよ。
 */

float fnc2(float array[N][N], int n)
{
    float sum = 0.0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += array[i][j];
    return sum;
}

int main(void)
{
    float a[N][N] = {{1, 10}, {2, 100}}, n = 2;
    printf("%f\n", fnc2(a, n));
    return 0;
}