#include <stdio.h>
int inprod(int a[], int b[], int i);
/**
 * 名古屋大学　大学院情報学研究科　2009年度博士前期課程入試問題　情1-2
 *
 * ---問題---
 * 再帰的プログラミングを用いて、２つのベクトルの内積を計算する関数inprodを
 * C言語で作成した。２つのベクトルとそれらの要素数は、それぞれ配列変数a,bと
 * 変数iに代入される。関数inprodと、それを用いる関数mainからなるプログラム
 * を以下に示す。括弧内に入れるべき式、または式の一部を答えよ。
 */

int main()
{
    int a[] = {1, 2, 3}, b[] = {100, 10, 1}, n = 3;
    printf("%d\n", inprod(a, b, n));
    return 0;
}

int inprod(int a[], int b[], int i)
{
    if (i > 0)
    {
        return a[i - 1] * b[i - 1] + inprod(a, b, i - 1);
    }
    else
    {
        return 0;
    }
}