#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Rows 10
#define Cols 10

/**
 * 名古屋大学　大学院情報学研究科　2011年度博士前期課程入試問題　情1-2
 *
 * ---問題---
 * 正方行列の転置行列を求める関数transを作成した。２次元配列の整数変数aに
 * 転置したい行列を、整数変数nにそのサイズを与えて関数transを呼ぶと、trans
 * はaに定義された行列の転置行列をaに代入して返す。ただし、２次元配列の整数
 * 変数aの最大サイズは10である。下線部に入れるべき式、または式の一部を答えよ。
 */
void trans(int a[][Cols], int n)
{
    int i, j, x;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            // printf("%d & %d\n", a[i][j], a[j][i]);
            x = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = x;
        }
    }
}

void print_array(int a[][Cols], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void generate_random_arary(int arr[][Cols], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr[i][j] = (rand() % 9) + 1; // 1~9の数と仮定する
    }
}

/**
 * ＠テスト
 */
int main(void)
{
    srand(time(NULL));
    /**
     * @正方行列の行と列の数は同じ
     */
    int nums[Rows][Cols];
    int nums2[Rows][Cols];
    generate_random_arary(nums, Rows, Cols);
    print_array(nums, Rows);

    trans(nums, Rows);
    printf("----------\n");
    print_array(nums, Rows);
    return 0;
}