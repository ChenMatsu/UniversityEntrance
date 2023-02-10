#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define XMAX 12

/**
 * 名古屋大学　大学院情報学研究科　2020年度博士前期課程入試問題　情1−2
 *
 * ---問題---
 * 乱数を利用して、６面のサイコロ２個を同時に振った時の出目の合計値xの頻度分布とその平均値を計算する
 * プログラムを以下のように作成する。乱数の生成には、呼び出されるたびに、０以上RAND＿MAX以下のどれか
 * 一つの整数を返す関数rand()を使用する（RAND_MAXはstdlib.hで定義されている）。この関数を使って、
 * ６面のサイコロ１個を振った時の出目を返すかんすdice()を作成して、main関数の中で使用するものとする。
 *
 * １）空欄を適切に埋めよ
 * ２）n = 10^6として、このプログラムを実行したときに期待される出力結果を示せ
 */

/* サイコロは1-6の数字が出る*/
int dice()
{
    return (rand() % 6) + 1;
}

double mean(int h[], int n)
{
    double m = 0.0;
    for (int i = 2; i <= XMAX; i++)
        m += h[i] / i;
    return m;
}

int main()
{
    int n;             /*nはサイコロ2個を同時に振る回数*/
    int x;             /*xはサイコロ2個の出目の合計値*/
    int h[XMAX + 1];   /*hはxを記録する配列（頻度分布）*/
    srand(time(NULL)); /*乱数の種を設定する => システムの時間を使用する*/
    scanf("%d", &n);   /*nを標準入力する*/

    for (int i = 0; i <= XMAX; i++)
    {
        h[i] = 0; /*hを初期化する*/
    }

    for (int i = 0; i < n; i++)
    {
        x = dice() + dice(); /*サイコロ2個を振ってxを求める*/
        h[x]++;              /*xをhに記録する*/
    }

    for (int i = 2; i <= XMAX; i++)
    {
        printf("x=%dの頻度は%.1fe+4\n", i, h[i] / 10000.0); /*hを表示する*/
    }
    printf("平均值は%.1f\n", mean(h, n)); /*hの平均値を表示する*/
    return 0;
}