#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2017年度博士前期課程入試問題　情1−2~4
 *
 * ---問題---
 *
 * １）
 * ２つの自然数の最大公約数を求める方法にユークリッドの互除法がある。この方法では、
 * ２つの自然数a、b（a>=b)について、aのbによる剰余をrとすると、aとbとの最大公約数は
 * bとrとの最大公約数に等しいという性質を用いている。これを実現するプログラムの処理
 * 過程は以下のようになる。下線部を適切な言葉や数式を用いて埋めよ。
 *
 * ２）
 * 問題[２]で示した性質を用いて、最大公約数を返す関数func1を再帰的プログラムミングにより
 * C言語で作成した。この関数は、入力引数として整数変数a,b(a>=b)をとり、返り値として最大
 * 公約数を返す。下線部を適切に埋めよ。
 *
 * ３）
 * 問題[３]の関数func1の引数を1に360を、bに25を代入してプログラムを実行する。このとき、
 * 関数func1が再帰的に呼び出される回数と、関数func1が再帰的に呼び出される毎の変数aとb
 * の値を示せ。
 */

/**
 * ---答---
 * １）
 * ---擬似コード---
 *
 * ステップ１：aのbによる剰余rを計算する
 * ステップ２：rが0であれば、bを最大公約数として返して出力してプログラムを終了する
 * ステップ３：aへ(b * (a/b))を代入する
 * ステップ４：bへ(a - b * (a/b))を代入する
 * ステップ５：ステップ1へ戻る
 */

/**
 * ２）
 */
int func1(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return func1(b * (a / b), a - b * (a / b));
    }
}

/**
 * ３）
 * a = 360, b = 25
 *
 * func1(360, 25)
 *      a = 25 * (360 / 25), b = 360 - 25 * (360 / 25) = 10
 *      count = 1
 * func1(350, 10)
 *      a = 10 * (350 / 10), b = 350 - 10 * (350 / 10) = 0
 *      count = 2
 *      break;
 *
 */

/**
 * @Note Testing
 */
int main()
{
    printf("%d\n", func1(360, 25));
    return 0;
}
