#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2019年度博士前期課程入試問題　情1−3
 *
 * ---問題---
 * 以下の成績表を処理するプログラムを作成する。空欄を適切に埋めよ。また、プログラムの実行結果を示せ。
 *
 *      学籍番号　｜　国語　｜　数学
 *           1 　　　  60　　  100
 *           2　　　   75　　　 40
 *           3        70    　70
 * 　        4        10      0
 *           5　      80      70
 *
 */
int sum(int x[][5], int sid)
{
    int i, s = 0;
    for (i = 0; i < 2; i++)
        s += x[i][sid - 1];
    return s;
}

float mean(int x[][5], int tid)
{
    int j;
    float m = 0.0;
    for (j = 0; j < 5; j++)
        m += x[tid][j];
    return m / 5.0;
}

int count(int x[][5], int tid)
{
    int j, n = 0;
    float m;
    m = mean(x, tid);
    for (j = 0; j < 5; j++)
    {
        if (x[tid][j] > m)
        {
            n++;
        }
    };
    return n;
}

int main()
{
    int scores[][5] = {
        {60, 75, 70, 10, 80}, {100, 40, 70, 0, 70}};
    

    printf("学籍番号2の国語は%d点です\n", scores[0][1]);
    printf("学籍番号3の合計値は%d点です\n", sum(scores, 3));
    printf("国語の平均点は%.1f点です\n", mean(scores, 0));
    printf("数学の点数が平均点以上は%d名です\n", count(scores, 1));
    return 0;
}