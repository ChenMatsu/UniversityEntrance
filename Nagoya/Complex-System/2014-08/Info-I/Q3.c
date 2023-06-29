#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 名古屋大学　大学院情報学研究科　2015年度博士前期課程入試問題　情1-5
 *
 * ---問題---
 * 大きさがnである整数型１次元配列変数aの各要素に任意の整数が代入されている。
 * また、整数変数xに別の整数が代入されている。配列変数aの各要素のなかで、xよ
 * り大きな数値をもつ要素の値の合計を求めるプログラムを、再帰的プログラミング
 * により作成した。作成した関数プログラムfunc2は、x,a,nを引数として受け取り、
 * 配列変数aの各要素のなかで、xより大きな数値をもつ要素の値の合計を返り値とし
 * て返す。下線部を適切に埋めよ。
 */
int func2(int x, int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (x < a[n - 1])
        {
            return (func2(x, a, n - 1) + a[n - 1]);
        }
        else
        {
            return (func2(x, a, n - 1));
        }
    }
}

/**
 * @Note Testing
 */
int main(void)
{
    int nums[] = {1, 7, 9, 21, 10, 56, 8, 32, 73, 11, 112, 159, 210, 2, 313, 859};

    srand(time(NULL));
    int x = rand() % 1000;

    printf("Xの値：%d\n", x);
    printf("合計：%d\n", func2(x, nums, sizeof(nums) / sizeof(int)));
    return 0;
}