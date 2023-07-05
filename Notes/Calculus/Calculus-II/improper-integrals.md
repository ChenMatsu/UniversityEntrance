### Improper Integrals

$$
    \begin{align*}
        \int_{-∞}^∞f(x)dx = \lim_{t\to -∞}\int_{t}^af(x)dx + \lim_{t\to ∞}\int_{a}^tf(x)dx
    \end{align*}
$$

**Comparison Test**

$$
    \begin{align*}
        f(x) \ge g(x) \ge 0, \text{then} \\\
        \int_a^bf(x)dx \le \int_a^bg(x)dx \le 0
    \end{align*}
$$

$$
    \int_a^∞f(x)dx \text{ converges } \to \int_a^∞g(x)dx \text{ also converges}
$$

$$
    \int_a^∞g(x)dx \text{ diverges } \to \int_a^∞f(x)dx \text{ also diverges}
$$

**Example**
$$
    \begin{align*}
        \int_1^∞\dfrac{1}{x^p}dx \\\
        \begin{cases}
            p > 1, & converges \\\
            0 < p \le 1 & diverges
        \end{cases}
    \end{align*}
$$