#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2018年度博士前期課程入試問題　情1−2
 *
 * ---問題---
 * 組み合わせの数nCk = n!/(n-k)!k!に関するプログラムを作成する。ただし、nとkは正の整数でn>=kとする。
 * １）nCkを計算する関数combを以下のように作成する。空欄を適切に埋めよ。
 * ２）関数combを使ってnCkを計算し、右下図のような三角形を出力する関数pascalを作成する。上下連続する
 * 　　段と段の数値の関係を考慮すると、これらの数値の配置には規則性があることがわかる。pascal(5)を実行したとき、
 * 　　右下図のように表示されるように、空欄を適切に埋めよ。
 * ３）再帰法を用いてnCkを計算する関数comb2を作成する。空欄を適切に埋めよ。
 */

/**
 * １）
 *    Ex: 5C2 = 5! / (n - 2)!2! = 5!/3!2! = 120/12 = 10
 */
int comb(int n, int k)
{

    int num = 1, den = 1; // denominator(den)
    while (k != 0)
    {
        num *= n;
        den *= k, n--, k--;
    }
    return num / den;
}

/**
 * ２）
 *    Ex:
 * 　　　　１
 *       1 1
 *      1 2 1
 *     1 3 3 1
 *    1 4 6 4 1
 */

void pascal(int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i + 1; j++)
        {
            printf(" ");
        }

        for (k = 0; k <= i; k++)
        {
            printf("%2d", comb(i, k));
        }
        printf("\n");
    }
}

/**
 * ３）
 */
int comb2(int n, int k)
{
    if (k == 0 || n == k)
        return 1;
    else
        return comb2(n - 1, k - 1) + comb2(n - 1, k);
}

/**
 * @Note Testing
 */
int main()
{
    int n, k;
    printf("---C(n, k)---\n");
    printf("n: ");
    scanf("%d", &n);
    printf("k: ");
    scanf("%d", &k);
    if (n < k)
    {
        printf("Sorry..., n should be greater than k.\n");
        return 0;
    }
    
    printf("comb(%d, %d): %d\n", n, k, comb(n, k));
    printf("comb2(%d, %d): %d\n", n, k, comb2(n, k));
    printf("----------\n");
    pascal(n);
    return 0;
}
