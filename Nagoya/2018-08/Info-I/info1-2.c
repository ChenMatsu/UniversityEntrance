#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2019年度博士前期課程入試問題　情1−2
 *
 * ---問題---
 * n番目のフィボナッチ数をa_nで表すと、a_nはa_0=0, a_1=1, n>=2ではa_n = a_{n-1} + a_{n-2}で
 * 定義される。以下はnを標準入力から受け取り、a_nを計算するプログラムである。
 * １）a_nを再帰法で計算する関数fibの空欄を適切に埋める
 * ２）fib2はfibよりも少ない計算量でa_nを計算する関数である。関数fib2の空欄を適切に埋めよ
 * ３）n = 5としてこのプログラムを実行したとき、関数fibとfib2が呼び出される回数をそれぞれ答えよ
 */

int n;
int fib_count_one = 0;
int fib_count_two = 0;
int fib(int k) /* n = 5 => 15 [2F(n) - 1] times*/
{
    fib_count_one++;
    if (k == 0 || k == 1)
        return k;
    else
        return fib(k - 1) + fib(k - 2);
}

int fib2(int a1, int a2, int k) /* n = 5 =>  6 times (n + 1 times)*/
{
    fib_count_two++;
    if (k == n)
        return a1;
    else
        return fib2(a2, a1 + a2, k + 1);
}

int main()
{
    scanf("%d", &n);
    printf("%d %d in %d total call\n", n, fib(n), fib_count_one);
    printf("%d %d in %d total call\n", n, fib2(0, 1, 0), fib_count_two);
    return 0;
}