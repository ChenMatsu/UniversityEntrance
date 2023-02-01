#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2023年度博士前期課程入試問題　情1−2
 */
int f(int a[], int n)
{
    int i = 0, b = 0;

    /**
     * 單純透過二分法將矩陣反轉 所需時間約為O(n / 2)
     */
    while (i < n / 2)
    {
        b = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = b;
        i++;
    }
    return 0;
}

int main(void)
{
    int n = 5, i;
    int a[] = {1, 2, 3, 4, 5};

    f(a, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}