### Fundamental Theorem of Calculus

$$
    \int_x^{x+h}f(t)dx \approx f(x) \cdot h
$$

$$
    \begin{align*}
        g'(x) & = \lim_{h\to 0}\dfrac{g(x+h) - g(x)}{h} \\
        & = \lim_{h\to 0}\dfrac{\int_a^{x+h}f(t)dt - \int_a^xf(t)dt}{h} \\
        & = \lim_{h\to 0}\dfrac{\int_x^{x+h}f(t)dt}{h} \\
        & = \lim_{h\to 0}\dfrac{f(x) \cdot h}{h} = f(x)
    \end{align*}
$$

**Theorem1**
$$
    \dfrac{d}{dx}\int_a^xf(t)dt = f(x)
$$

**Example1**
$$
    g(x) = \int_a^xe^{\sqrt t}dt
$$

$$
    \begin{align*}
        \dfrac{d}{dx}\int_7^{x^3}e^{\sqrt t}dt & = \dfrac{d}{dx}g(x^3) \\
            & = g'(x^3) \cdot 3x^2 = e^{\sqrt {x^3}} \cdot 3x^2
    \end{align*}
$$

**Theorem2**
$$
    \int_a^bf(x)dx = F(b) - F(a)
$$

**Example2**
$$
    \int_1^2x^2dx = F(2) - F(1) = \dfrac{2^3}{3} - \dfrac{1^3}{3}
$$

1. Indefinite Integral: A family of functions
$$
    \int x^2dx = \dfrac{x^3}{3} + C
$$
2. Accumulation Function: A function
$$
    \int_a^xt^2dt
$$
3. Definite Integral: A number
$$
    \int_a^bf(x)dx = F(b) - F(a)
$$