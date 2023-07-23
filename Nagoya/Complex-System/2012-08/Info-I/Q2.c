#include <stdio.h>
#include <math.h>
/**
 * 名古屋大学　大学院情報学研究科　2013年度博士前期課程入試問題　情1-2~4
 */

/**
 * [2]10進数である３を２進数で表記した文字列を、10進数と見なした場合の値を
 * 　　求める処理過程は以下のステップで構成される。括弧内に適切な文を記述せよ。
 *
 * ---擬似コード---
 * １）[与えられた10進数の値３を2進数の文字列で表て11になる、そして2で割り算]すると、商1と剰余1を得る
 * ２）[剰余1を同じく2で割り算]すると、商0と剰余1を得る
 * ３）[商と剰余は0]なので、操作を終了する
 * ４）ステップ２）の剰余1と１）の剰余1を左から右へ順に並べて文字列"11"を10進数
 * 　　表記と見なした値11が、求める値である。
 */

/**
 * [3]問題[2]を参考にして、aをn進数で表記した文字列を10進数と見なした場合の値
 *    を求めるアルゴリズムを記述した。ただし、aは0<=aなる整数、nは2<=n<=9なる
 *  　整数である。括弧内に適切な文を記述せよ。
 *
 * ---擬似コード---
 * １）整数変数xにa、整数変数yに0、整数変数iに0を代入する
 * ２）[aは0より大きい数]れば次へ進む。そうでなければ、yを出力して終了する
 * ３）[aをnでモジュールして得た数字]を整数変数zへ代入する
 * ４）yにy+z*10^iを代入する
 * ５）[aをnで割り算して得た数字]をxへ代入する
 * ６）iにi+1を代入する
 * ７）２）へ戻る
 */

/**
 * [4]問題[3]のアルゴリズムを用いて、整数値xをn進数で表記した文字列を10進数と
 * 　　見なした場合の値を返す関数fnc1をC言語で作成した。プログラムで用いている
 *   　変数名は問題[3]に対応している。pow(a,b)は整数型変数aとbについて、aの
 *     b乗を計算する関数である。下線部に入れるべき式、または式の一部を答えよ。
 *
 */
int fnc1(int x, int n)
{
    int y = 0, i = 0, z;
    while (x > 0)
    {
        z = x % n;
        y += z * pow(10, i);
        x = x / n;
        i++;
    }
    return y;
}

/**
 * @テスト
 */
int main(void)
{
    printf("2進数 結果：%d\n", fnc1(3, 2)); // => 3
    printf("8進数 結果：%d\n", fnc1(3, 8)); // => 3

    printf("-----\n");

    printf("2進数 結果：%d\n", fnc1(11, 2)); // => 1011
    printf("8進数 結果：%d\n", fnc1(11, 8)); // => 13 => 1*8^1 + 3*8^0

    printf("-----\n");

    printf("2進数 結果：%d\n", fnc1(128, 2));
    printf("8進数 結果：%d\n", fnc1(65, 8));

    printf("-----\n");

    printf("8進数 結果：%d\n", fnc1(107, 8));
    printf("8進数 結果：%d\n", fnc1(153, 8));

    printf("-----\n");

    printf("2進数 結果：%d\n", fnc1(21, 2)); // => 10101
    return 0;
}