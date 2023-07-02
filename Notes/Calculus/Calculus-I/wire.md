### Wire to Largest Rectangle

A wire of length $L$ is folded into a rectangle. How should I fold it to optimize area?

$$
    \begin{align*}
        L = 2(x + y) \\
        A = xy = x\dfrac{L - 2x}{2} = \dfrac{L}{2}x - x^2 \\
        A' = \dfrac{L}{2} - 2x = 0, \quad x = \dfrac{L}{4}
    \end{align*}
$$