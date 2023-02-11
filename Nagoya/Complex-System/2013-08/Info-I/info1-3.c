#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2014年度博士前期課程入試問題　情1-3
 *
 * ---問題---
 * ２つのベクトルの内積を計算する関数fnc2を再帰的プログラミングにより作成した。
 * ２つのベクトルは、それぞれ浮動小点数型の一次元配列aとbに、それらのサイズは
 * 整数型の変数nに代入されて関数fnc2へ渡される。空欄１から4を適切に埋めよ。
 */

float fnc2(float a[], float b[], int n)
{
    if (n != 1)
    {
        return a[n - 1] * b[n - 1] + fnc2(a, b, n - 1);
    }
    else
    {
        return a[0] * b[0];
    }
}

int main(void)
{
    int size = 5;
    float vec_one[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float vec_two[] = {5.0, 4.0, 3.0, 2.0, 1.0};

    printf("%.2f\n", fnc2(vec_one, vec_two, size));
    return 0;
}