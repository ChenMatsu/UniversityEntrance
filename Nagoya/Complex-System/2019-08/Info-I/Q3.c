#include <stdio.h>

/**
 * 名古屋大学　大学院情報学研究科　2020年度博士前期課程入試問題　情1−3
 *
 * ---問題---
 * アルファベットの文字列を対象として、文字列の長さを計算したり、文字列の左右を反転したり、
 * 回文かどうかを判定したりするプロクラムを以下のように作成する。空欄を適切に埋めよ。また、
 * プログラムの実行結果を示せ。
 * （注：回文とは、始めから読んでも終わりから読んでも同じであるような文のことである）
 */

int str_len(char s[]) /*文字列の長さを計算する*/
{
    int len;
    // for (len = 0; *s != '\0'; s++, len++);
    for (len = 0; s[len] != '\0'; len++)
        ;
    // for (len = 0; *(s++) != '\0'; len++)
    return len;
}

void reverse_str(char s[]) /*文字列の左右を反転する*/
{
    int i, len = str_len(s);
    printf("%d\n", len);
    char temp;
    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[(len - 1) - i];
        s[(len - 1) - i] = temp;
    }
}

int palindrome(char s[]) /*文字列の回文かどうかを判定する*/
{
    int i, j;
    for (i = 0, j = str_len(s) - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}

int main()
{
    char ss[2][20] = {"ahitinnnok", "imayuuyami"};
    reverse_str(ss[0]);
    printf("%s\n", ss[0]);
    printf("%s\n", ss[1]);
    printf("%d\n", palindrome(ss[0]));
    printf("%d\n", palindrome(ss[1]));
    return 0;
}