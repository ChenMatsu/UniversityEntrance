#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int _binary_search_recursion(int nums[], int left, int right, int val);

/**
 * O(expression): time complexity of calculation
 */

/**
 * O(n)
 */
int linear_search(int nums[], int n, int val)
{
    for (int i = 0; i < n; i++)
        if (nums[i] == val)
            return i;
    return -1;
}

/**
 * O(nlog n)
 */
int binary_search_loop(int nums[], int n, int val)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == val)
            return mid;
        else if (nums[mid] > val)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int binary_search_recursion(int nums[], int n, int val)
{
    return _binary_search_recursion(nums, 0, n - 1, val);
}

int _binary_search_recursion(int nums[], int left, int right, int val)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == val)
            return mid;
        else if (nums[mid] > val)
            return _binary_search_recursion(nums, left, mid - 1, val);
        else
            return _binary_search_recursion(nums, mid + 1, right, val);
    }
    return -1;
}

int main(void)
{
    srand(time(NULL));
    int nums[SIZE];
    for (int i = 0; i < SIZE; i++)
        nums[i] = (rand() % SIZE) + 1;
    printf("%d\n", linear_search(nums, SIZE, (rand() % SIZE) + 1));
    printf("%d\n", binary_search_loop(nums, SIZE, (rand() % SIZE) + 1));
    printf("%d\n", binary_search_recursion(nums, SIZE, (rand() % SIZE) + 1));

    return 0;
}