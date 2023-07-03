### Riemann Sums

$$
    \int_a^bf(x)dx = \lim_{n\to ∞}\sum_{i=1}^nf(x_i)\Delta x
$$

$$
    \Delta x = \dfrac{b-a}{n}, \quad x_i = a + i\Delta x  = a + i\dfrac{b-a}{n}
$$

**Example1**

With right endpoints on $[0,3]$
$$
    \begin{align*}
        \lim_{n\to ∞}\sum_{i=1}^n tan(2+\dfrac{3i}{n})\dfrac{3}{n} = \int_0^3tan(2+x)dx
    \end{align*}
$$

$$
    \Delta x = \dfrac{3 - 0}{n}, \quad x_i = 0 + i\dfrac{3}{n}
$$


**Example2**

With right endpoints on $[0,3]$
$$
    \begin{align*}
        \lim_{n\to ∞}\sum_{i=1}^n\dfrac{9}{(2+\dfrac{6i}{n})^2i} & =
        \lim_{n\to ∞}\sum_{i=1}^n\dfrac{9}{(2+2x_i)^2x_i}\dfrac{3}{n} \\\
        & = \int_0^3\dfrac{9}{(2+2x)^2x}dx
    \end{align*}
$$

$$
    x_i = \dfrac{i3}{n}, \quad \Delta x = \dfrac{3}{n}
$$