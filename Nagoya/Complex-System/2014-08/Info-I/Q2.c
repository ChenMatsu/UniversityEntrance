#include <stdio.h>
#include <math.h>

/**
 * 名古屋大学　大学院情報学研究科　2015年度博士前期課程入試問題　情1-2~4
 */

/**
 * [2]整数変数xに代入された整数が素数であるかどうかを判定するプログラムの処理
 * 過程は以下のようになる。下線部を適切な言葉や数式を用いて埋めよ。
 *
 * ---答---
 * ---擬似コード---
 * 1.整数変数iに[2で初期化]する
 * 2.xとiの[モジュール]を求める
 * 3.[モジュール]が0の場合、「素数でない。」と表示して、[プログラムを中止]する
 * 4.[モジュール]が0でない場合、iに1を加える
 * 5.iが[xより小さい]の場合、ステップ2へ戻る
 * 6.「素数である。」と表示して、[プログラムを中止]する
 */

int count = 0;
/**
 * [3]問題[2]の処理過程に基づいて、整数変数xが素数かどうかを判定する関数プログ
 * ラムfunc1をC言語により作成した。この関数は、入力引数として整数変数xをとり、
 * 返り値として”素数である”または”素数でない”という文字列を返す。下線部を適切に
 * 埋めよ。
 */
char *func1(int x)
{
    int i;
    for (i = 2; i < sqrt(x); i++)
    {
        count++;
        if (x % i == 0) 
            return "素数でない";
    }
    return "素数である";
}

/**
 * [4]問題[3]の関数プログラムの引数xに299を代入してプログラムを実行する。この
 * とき、問題[3]の関数プログラム内のforループが繰り返される回数を求めよ。
 * ---答---
 * 299 % 13 = 0 => 13 - 2 + 1 = 12回です
 */

int main(void)
{
    printf("%s\n", func1(299));
    printf("forループの繰り返される回数: %d\n", count);
    return 0;
}
