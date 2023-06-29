#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2014年度博士前期課程入試問題　情1-2
 *
 * ---問題---
 * 大きさnの整数型の1次元配列aについて要素を逆順に並べ替える関数fnc1を作成した。
 * 関数fnc1は、引数としてaとnをとるものとする。例えば、配列aをa[0]=1,a[1]=2,
 * a[2]=3とし、n=3としてこの関数を呼ぶとa[0]=3,a[1]=2,a[2]=1と並べ替えられる。
 * 空欄1から4を適切に埋めよ。
 */
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void fnc1(int a[], int n)
{
    int dum, i;

    for (i = 0; i < n / 2; i++)
    {
        dum = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = dum;
    }
}

int main(void)
{
    int nums[] = {1, 2, 3};

    print_array(nums, 3);
    fnc1(nums, 3);
    print_array(nums, 3);

    return 0;
}