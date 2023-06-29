#include <stdio.h>
#include <math.h>

/**
 * 名古屋大学　大学院情報学研究科　2009年度博士前期課程入試問題　情1-3~5
 */

/**
 * [3]素数判定を行う関数primをC言語で作成した。変数xに値を受け取り、その
 *  　変数の値が素数ならば１を、素数でなければ０を返す。ただし、変数xは１
 *  　より大きな整数とする。括弧内に入れるべき式、または式の一部を答えよ。
 */
int prim(int x)
{
    int i, label = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            label = 0;
            return label;
        }
    }
    return label;
}

/**
 * [4]問[3]のプログラムの処理速度を向上するためには、どの箇所をどのように
 *  　修正すればよいか論述せよ。
 *
 * ---答---
 * 処理速度を向上するためには、prim()関数を再帰的なプログラムを書き直すのは
 * 方法の一つである。再帰的なプログラムは多いメモリが必要ですが、その代わりに
 * 速度の上昇がもらえます。たとえば、以下のように作成する：
 */
int new_prim(int x, int i)
{
    if (x == i)
    {
        return 1;
    }
    else if (x % i == 0)
    {
        return 0;
    }
    else
    {
        return new_prim(x, i + 1);
    }
}

int gpt_prim(int x)
{
    if (x < 2)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;
    int limit = sqrt(x);
    for (int i = 3; i <= limit; i += 2)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

/**
 * [5]問[3]のプログラムを利用するための関数mainを作成せよ。この関数では
 *  　キーボードより変数yへ１より大きな整数を読み込む。それを関数primに引
 * 　　き渡して、関数primの結果に応じて、変数yが素数であれば”素数です.”、
 * 　　素数でなければ”素数ではありません.”と表示するようにせよ。
 */
int main(void)
{
    int y;
    printf("Number(> 1): ");
    scanf("%d", &y);

    while (y < 2)
    {
        printf("入力数字は１より大きい必要があります。\n");
        printf("Number(> 1): ");
        scanf("%d", &y);
    }

    if (gpt_prim(y))
        return printf("素数です.\n");
    printf("素数ではありません.\n");
}