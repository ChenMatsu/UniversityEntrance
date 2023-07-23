#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 名古屋大学　大学院情報学研究科　2012年度博士前期課程入試問題　情1-2
 *
 * ---問題---
 * 大きさがnである整数型1次元配列aの各要素には1から9までの整数がランダム
 * に代入されている。xを1から9までのいずれかの値を取る整数とする。x, a,
 * aの大きさnを引数として受け取り、xと同じ値が代入されたaの要素に0を代入
 * する関数fnc1を再帰的プログラミングで作成した。下線部に入れるべき式、ま
 * たは式の一部を答えよ。
 */

/**
 * @Note 原題意並沒有描述終止的條件 因此直接設0
 *       此外題目傳入陣列大小，但卻直接修正超出陣列大小的元素，個人判定應該是要在傳入時直接減少1作為傳入的大小
 */
int fnc1(int a[], int n, int x)
{
    if (a[n] == x)
        a[n] = 0;
    if (n > 0)
    {
        return fnc1(a, n - 1, (rand() % 9) + 1); // 1 ~ 9
    }
    else
    {
        return 0;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * @テスト
 */
int main(void)
{
    srand(time(NULL));

    int nums[] = {1, 2, 5, 3, 2, 6, 7, 8, 9, 2, 3, 4, 1, 5, 6};
    int size = (int)sizeof(nums) / sizeof(int);
    print_array(nums, size);
    fnc1(nums, size - 1, (rand() % 9) + 1);
    printf("%d\n", size);
    print_array(nums, size);
    return 0;
}