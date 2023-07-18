#include <stdio.h>
#include <string.h>

/**
 * 名古屋大学　大学院情報学研究科　2012年度博士前期課程入試問題　情1-4~5
 *
 * [4]文字型配列nameと整数型変数ageをメンバーとする構造体exmを定義せよ
 */
struct exm
{
    int age;
    char name[100];
    // char *name; // This should work!
};


/**
 * [5]問題[4]で定義した構造体を用いて、サイズnの配列memを定義した。memの
 * メンバーnameには氏名が,メンバーageには年齢が代入されている。ageの値が
 * 整数変数zの値と等しいmemの要素のnameをディスプレイに表示する関数fnc3を
 * 作成した。下線部に入れるべき式、または式の一部を答えよ。
 */
int fnc3(struct exm mem[], int n, int z)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (mem[i].age == z)
            printf("%s\n", mem[i].name);
    }
    return 0;
}

struct exm mems[2];
/**
 * @テスト
 */
int main(void)
{

    mems[0].age = 25;
    mems[1].age = 30;

    strcpy(mems[0].name, "Matsu");
    strcpy(mems[1].name, "Cool Matsu");

    fnc3(mems, 2, 25);

    return 0;
}