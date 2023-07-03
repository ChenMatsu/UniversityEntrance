### Substitution

$$
    \begin{align*}
        \dfrac{d}{dx}F(g(x)) & = F'(g(x))g'(x) \\\
        & = f(g(x))g'(x)
    \end{align*}
$$


$$
    \begin{align*}
        \int \dfrac{d}{dx}F(g(x))dx & = \int f(g(x))g'(x)dx \\  
        & = F(u) + C = \int f(u)du
    \end{align*}
$$

**Example1**
$$
    \int 2x\sin(x^2)dx = \int \sin(u)dx = -\cos(x^2) + C
$$

**Example2**
$$
    \int \dfrac{e^{2x}}{1 + e^{2x}}dx = \int \dfrac{1}{2u}du = \dfrac{1}{2}ln(1+e^{2x}) + C
$$

$$
    \int_a^bf(g(x))g'(x)dx = \int_{g(a)}^{g(b)}f(u)du
$$

**Example3**
$$
    \int_0^1\sqrt{1+3x}dx = \dfrac{1}{3}\int_1^4\sqrt udu = \dfrac{14}{9}
$$