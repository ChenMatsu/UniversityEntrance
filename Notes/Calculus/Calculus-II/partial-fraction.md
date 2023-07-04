### Partial Fractions

**Example1**
$$
    \begin{align*}
        \dfrac{x^2+2x-1}{2x^3+3x^2-2x} & = \dfrac{x^2+2x-1}{2x^3+3x^2-2x} =  \dfrac{A}{x} + \dfrac{B}{2x-1} + \dfrac{C}{x+2} \\\
        x^2+2x-1 & = A(2x^2+3x-2)+B(x^2+2x)+C(2x^2-x) \\\
        & = (2A+B+2C)x^2+(3A+2B-C)x-2A \\\

        & \begin{cases} 1 = (2A+B+2C) \\\ 2 = (3A+2B-C) \\\ -1=-2A \end{cases}, A = \dfrac{1}{2}, B = \dfrac{1}{5}, C = \dfrac{-1}{10} 
    \end{align*}
$$

$$
    \begin{align*}
        \dfrac{1}{2}\int\dfrac{1}{x}dx + \dfrac{1}{5}\int\dfrac{1}{2x-1}dx - \dfrac{1}{10}\int\dfrac{1}{x+2}dx & = \dfrac{1}{2}ln(x) + \dfrac{1}{2}ln(|2x-1|) - \dfrac{1}{10}ln(|x+2|) + C
    \end{align*}
$$

**Example2**
$$
    \begin{align*}
        \dfrac{1}{(x-1)(x^2+1)} = \dfrac{A}{x-1} + \dfrac{Bx+C}{x^2+1}
    \end{align*}
$$

**Example3**
$$
    \begin{align*}
        \dfrac{1}{(x-1)^2} = \dfrac{A}{x-1} + \dfrac{B}{(x-1)^2}
    \end{align*}
$$

**Example4**
$$
    \begin{align*}
        \dfrac{5x^2+x+3}{x^2(x^2+1)} & = \dfrac{A}{x} + \dfrac{B}{x^2} + \dfrac{Cx+D}{x^2+1} \\\
        5x^2+x+3 & = (A+C)x^3+(B+D)x^2+Ax+B \\\
        A = 1, B = 3, C = -1, D = 2
    \end{align*}
$$

$$
 \begin{align*}
        \int\dfrac{1}{x}dx + \int\dfrac{3}{x^2}dx + \int\dfrac{-x+2}{x^2+1}dx & = ln|x| - 3x^{-1} - \dfrac{1}{2}ln|x^2+1| + 2tan^{-1}x + C
    \end{align*}
$$

> A quadratic is irreducible if $b^2 - 4ac < 0$