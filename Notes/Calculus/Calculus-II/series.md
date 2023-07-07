### Series

**Sequence**

$$
    a_n = (\dfrac{1}{2})^n \to \{\dfrac{1}{2},\dfrac{1}{4},\dfrac{1}{8},\dfrac{1}{16},\dfrac{1}{32}...\} 
$$

**Series**

$$
    \sum_{n=1}^{∞}a_n = \sum_{n=1}^{∞}(\dfrac{1}{2})^n = \dfrac{1}{2} + \dfrac{1}{4}+ \dfrac{1}{8}+ \dfrac{1}{16}+ \dfrac{1}{32} + ...
$$

> The partial sums $s_n$ are a **sequence**
>
> $\sum_{n=1}^∞ a_n = L$ if $\lim_{n\to∞} s_n ~ L$

### Geometric Series

$$
    \sum_{n=1}^∞ ar^{n-1} = a + ar + ar^2 + ...
$$

$$
    \begin{align*}
        s_n & = a + ar + ar^2 + ... + ar^{n-1} \\\
        rs_n & = ar + ar^2 + ar^3 + ... + ar^{n} \\\
        s_n - rs_n & = s_n(1 - r) = a - ar^n = a(1 - r^n) \\\
        s_n & = \dfrac{a(1-r^n)}{1-r}
    \end{align*}
$$

$$
    \begin{align*}
        \lim_{n\to ∞}s_n & = \lim_{n\to ∞}\dfrac{a(1-r^n)}{1-r} \\\
        & = \begin{cases} \text{Diverges} & |r| \ge 1 \\\ \dfrac{a}{1-r} & |r| < 1 \end{cases}
    \end{align*}
$$

**Example1**

$$
    \sum_{n=1}^{∞}(\dfrac{1}{2})^{n} = \sum_{n=1}^{∞}\dfrac{1}{2}(\dfrac{1}{2})^{n-1} = \dfrac{1/2}{1 - 1/2} = 1
$$

### Harmonic Series

$$
    \sum_{n=1}^∞ \dfrac{1}{n} = 1 + \dfrac{1}{2} + \dfrac{1}{3} + ... 
$$

$$
    \begin{align*}
        s_2 & = 1 + \dfrac{1}{2} \\\
        s_4 & = 1 + \dfrac{1}{2} + (\dfrac{1}{3} + \dfrac{1}{4}) > 1 + \dfrac{1}{2} + (\dfrac{1}{4} + \dfrac{1}{4}) = 1 + \dfrac{2}{2} \\\
        s_8 & = 1 + \dfrac{1}{2} + (\dfrac{1}{3} + \dfrac{1}{4}) + (\dfrac{1}{5} + \dfrac{1}{6} + \dfrac{1}{7} + \dfrac{1}{8}) > 1 + \dfrac{1}{2} + (\dfrac{1}{4} + \dfrac{1}{4}) + (\dfrac{1}{8} + \dfrac{1}{8} + \dfrac{1}{8} + \dfrac{1}{8}) = 1 + \dfrac{3}{2} \\\
        & s_2n > 1 + \dfrac{n}{2}, \quad \lim_{n\to ∞} s_2n = ∞
    \end{align*}
$$

### Remainder of Series Approximation

$$
    \sum_{i=1}^{∞} a_i = \sum_{i=1}^{n} a_i + \sum_{i=n+1}^{∞} a_i
$$

$$
    \int_{n+1}^{∞}f(x)dx \ge R_n = (\sum_{i=1}^∞ a_n) - s_n = \sum_{i=n+1}^∞ a_i \le \int_{n}^{∞}f(x)dx
$$

### Alternating Series

$$
    \sum_{n=1}^∞ \dfrac{(-1)^{n-1}}{n}
$$

> For $\sum_{n=1}^∞(-1)^{n-1}b_n$ with
>
> 1. $b_n$ decreasing
> 2. $b_n$ positive
> 3. $\lim_{n\to ∞} b_n = 0$
>
> Then the series converges

### Remainder of Alternating Series

$$
    \sum_{i=1}^∞(-1)^{i-1}b_i = s_n + R_n \\\
    R_n \le |s_{n+1} - s_n| = b_{n+1}
$$