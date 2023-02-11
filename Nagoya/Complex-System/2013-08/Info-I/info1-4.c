#include <stdio.h>
#include <string.h>

/**
 * 名古屋大学　大学院情報学研究科　2014年度博士前期課程入試問題　情1-4
 *
 * ---問題---
 * 文字列を操作するプログラムとその実行結果を以下に示す。ただし、scpyは文字列
 * をコピーする関数、slenは文字列の長さを返す関数である。空欄1から6を適切に埋
 * めよ。
 *
 * ---実行結果---
 * n = [4]
 * a = [5]
 * c = [6]
 */
char *scpy(char *s, char *t)
{
    int i = 0;
    while (*t != '\0')
        *(s++) = *(t++); // both string move to the next char after assigned
    return s;
}

int slen(char *s)
{
    int n = 0;
    while (*(s++) != '\0')
        n++;
    return n;
}

int main(void)
{
    char a[5] = {'A', 'B', '\0', '1', '2'};
    char *b = "ABC";
    char c[10] = "";

    int i, n;
    scpy(c, b); // Copy b to c
    n = slen(c);
    b++; // b++ means b pointer moves to next char and start with it, then ABC becomes BC 
    for (i = 0; b[i] != '\0'; i++)
        c[n++] = b[i]; 
    printf("n = %d\n", n); // 5
    printf("a = %s\n", a); // AB
    printf("c = %s\n", c); // ABCBC
    return 0;
}
