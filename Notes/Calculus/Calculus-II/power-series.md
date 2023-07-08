### Power Series
> Power series are functions of x

$$
    \sum_{n=0}^∞x^n = \begin{cases} \dfrac{1}{1-x} & |x| < 1 \\\ \text{diverges} & |x| \ge 1 \end{cases}
$$

$$
    \sum_{n=0}^∞c_n(x-a)^n
$$

**Example1**

$$
    \sum_{n=1}^∞n!(x-2)^n
$$

$$
    \lim_{n\to ∞}|\dfrac{a_{n+1}}{a_n}| = \lim_{n\to ∞}|\dfrac{(n+1)!(x-2)^{n+1}}{n!(x-2)^n}| = \lim_{n\to ∞}|(n+1)(x-2)| = ∞ (\text{except } 0)
$$

1. Diverges unless $x=a$
2. Converges for all $x$
3. Radius $R > 0$ where:
   1. Converges for $|x-a| < R$
   2. Diverges for $|x-a| > R$
   3. More work when $|x-a| = R$