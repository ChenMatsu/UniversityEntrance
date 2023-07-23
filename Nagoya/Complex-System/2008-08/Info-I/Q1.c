/**
 * 名古屋大学　大学院情報学研究科　2009年度博士前期課程入試問題　情1-1
 *
 * ---問題---
 * C言語における、以下の用語またはプログラムの一部について説明せよ。
 *
 * １）条件演算子
 * ２）printf("%5i--->%+14.7e", a, b)
 * ３）プリプロセッサ
 *
 * ---答---
 * １）条件演算子を使うとif-elseのような条件分岐を実現することができます
 * ２）%5iはaを整数型で少なくとも5つ位置を保って出力する、%+14.7eは正と負を表て小点数の前は14位を保って、小点数の後は7位を保つ
 * ３）プリプロセッサとはC言語で、コンパイルの前に行う処理の事で、たとえば、ファイルの読み込み、定数など
 *    具体的には、#include <filename>, #define N 10というような場合です
 */

/**
 * ChatGPT 
 * 1) 
 *    条件演算子は、プログラミング言語やコンピュータの命令セットで使用される演算子のことを指します。
 *    条件演算子は、ある条件が真(true)または偽(false)であるかを評価し、その結果に基づいて異なる操作を実行します。
 *    以下に一般的な条件演算子の例を挙げます。
 *    1. 等しいかどうかの比較: ==
 *    2. 等しくないかどうかの比較: !=
 *    3. より大きいかどうかの比較: > 
 *    4. より小さいかどうかの比較: <
 *    5. 以上であるかどうかの比較: >=
 *    6. 以下であるかどうかの比較: <=
 * これらの条件演算子を使用することで、プログラム内で異なる条件に基づいて制御フローを変更したり、条件に合致するデータを選択したりすることができます。具体的なプログラ
 * 
 * 2) %5i: 
 *         This directive specifies the format for the first argument a, which is expected to be an integer (%i). 
 *         The 5 specifies a field width of 5 characters, meaning the output will be right-aligned within a field of width 5. 
 *         If the number requires less than 5 characters, it will be padded with spaces on the left.
 *    %+14.7e: 
 *         This directive specifies the format for the second argument b, which is expected to be a floating-point number (%e). 
 *         The 14 specifies a field width of 14 characters, meaning the output will be right-aligned within a field of width 14. 
 *         If the number requires less than 14 characters, it will be padded with spaces on the left. 
 *         The + sign ensures that both positive and negative numbers are displayed with a sign. 
 *         The .7 specifies the precision, indicating that the floating-point number should be displayed with 7 digits after the decimal point.
 * 
 * 3) 
 *    In the C programming language, the preprocessor is a phase that occurs before the compilation process. 
 *    It is responsible for performing text manipulation and generating modified source code before the actual compilation takes place. 
 *    The preprocessor directives are lines in your C code that begin with a # symbol and provide instructions to the preprocessor.
*/

#include <stdio.h>

int main(void)
{
    int a = 1234;
    double b = 1234.5678;
    printf("%5i--->%+14.7e\n", a, b);
    return 0;
}
