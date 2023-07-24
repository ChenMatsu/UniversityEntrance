#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2018年度博士前期課程入試問題　情1−3
 *
 * ---問題---
 * 整数値の列50, 40, 80, 70, 30, 10, 90, 60, 80を処理するプログラムを作成する。
 * 以下のプログラムでは、これらの整数値は配列dataの要素として前から順に格納されており、
 * 配列の末尾に−１を追加して値の終わりを表現している。
 * １）配列dataの最小値を求める関数get_minの空欄を適切に埋めよ。
 * ２）配列data[n]が、全体の大きい方から数えて何番目かを返すかんすget_orderを作成する。
 *    ただし、nは0以上の整数で、キーボードから入力するものとする。関数get_orderを作成せよ。
 * ３）n=3の時のプログラムの実行結果を示せ。
 */

int get_min(int data[])
{
    int *p = data;
    int min = *p;
    while (*(++p) != -1)
    {
        printf("%d\n", *p);
        if (*p < min)
            min = *p;
    }
    return min;
}

// int get_order(int data[], int n)
// {
//     int count = 1;
//     int *p = data;
//     int num = data[n];
//     while (*p != -1)
//     {
//         if (*p < num)
//         {
//             count++;
//         }
//         p++;
//     }
//     return count;
// }

int get_order(int data[], int n)
{
    int count = 1;
    int *p = data;
    while (*p != -1)
    {
        if (*(++p) > data[n])
            count++;
    }
    return count;
}

int main(void)
{
    int data[] = {50, 40, 80, 70, 30, 10, 90, 60, 80, -1};

    int n;
    scanf("%d", &n);
    printf("最小値は%dです\n", get_min(data));
    printf("data[%d]=%dは%d番目に大きい\n", n, data[n], get_order(data, n));
    return 0;
}