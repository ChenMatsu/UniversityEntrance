### L'Hopital's Rule
> Indeterminate Forms


$$
    \lim_{x\to a}\dfrac{f(x)}{g(x)} \text{ of form} \dfrac{0}{0} \text{ or } \dfrac{∞}{∞}
$$

$$
    \downarrow
$$

$$
    \lim_{x\to a}\dfrac{f(x)}{g(x)} = \lim_{x\to a}\dfrac{f'(x)}{g'(x)}
$$

1. $\dfrac{0}{0}$ and $\dfrac{∞}{∞}$ => LHopitals 
2. $∞ -∞$ or $0 \cdot ∞$ => Rewrite as fraction
3. $1^∞, ∞^0, 0^0$ => Natural log

---

**Example1**

$$
    \begin{align*}
        \lim_{x\to 0^+}x^{\sqrt x} \\ 
        y = x^{\sqrt x}, ln(y) = {\sqrt x}ln(x) \\
        \lim_{x\to 0^+} \dfrac{ln(x)}{x^{-1/2}} = -2\lim_{x\to 0^+} \dfrac{1}{x^{-3/2}x} = -2\lim_{x\to 0^+} x^{1/2} = 0 \\
        e^{\lim_{x\to 0^+}x^{\sqrt x}} = e^0 = 1
    \end{align*}
$$