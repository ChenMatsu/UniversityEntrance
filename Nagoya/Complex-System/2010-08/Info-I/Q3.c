#include <stdio.h>
#include <stdlib.h>

/**
 * 名古屋大学　大学院情報学研究科　2011年度博士前期課程入試問題　情1-3~5
 */

/**
 * [3]整数nを素数判定する関数checkを再帰的プログラミングによって作成した。
 *    関数checkは引数として整数変数nとmをとり、nが素数であればOKを、素数で
 * 　　なければNGを返す。ただし、最初に関数checkが呼ばれるときには、mに２を
 *  　与えなければならない。下線部に入れるべき式、または式の一部を答えよ。
 */
char *check(int n, int m)
{
    if (m > n / 2)
    {
        return "OK";
    }
    else if (n % m == 0)
    {
        return "NG";
    }
    else
    {
        return check(n, m + 1);
    }
}

/**
 * [4]問[3]の関数checkにおいて、引数nに143を、引数mに2を代入して関数
 *    checkを呼ぶとき、関数checkが呼ばれる回数を求めよ。また、その理由
 *  　について述べよ。
 *
 * ---答---
 * 最初はcheck(143, 2)から始めます、次はcheck(143, 3) => check(143, 4) => ... => check(143, 10)まで
 * 再帰的に関数を呼びます、mは10のとき、プログラムが中止される。
 *
 * よって、呼ぶ回数は合計10回である。
 */

/**
 * [5]問[3]の関数checkを用いて整数nの素数判定を行い、その結果を出力する
 *  　関数mainを作成せよ。関数mainでは、変数nへ値キーボードから入力し、
 * 　　関数checkの結果をファイルresultに出力するようにせよ。
 */
int main(void)
{
    int n;
    FILE *fptr;

    fptr = fopen("result", "w");
    scanf("%d", &n);

    fprintf(fptr, "%s", check(n, 2));

    fclose(fptr);
    return 0;
}