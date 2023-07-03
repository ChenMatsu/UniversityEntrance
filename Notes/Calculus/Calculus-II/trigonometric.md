### Trigonometric Integral

**Example1**
$$
    \begin{align*}
        \int{\sin^2(x)\cos(x)}dx & = \int{u^2}du, \quad u = \sin(x) du = \cos(x)dx \\\
        & = \dfrac{\sin^3(x)}{3} + C
    \end{align*}
$$

**Example2**
$$
    \begin{align*}
        \int{\sin^2(x)\cos^3(x)}dx & = \int{\sin^2(x)\cos^2(x)cos(x)}dx \\\ & = \int{\sin^2(x)(1-\sin^2(x)\cos(x))}dx \\\
        & = \int{[\sin^2(x) - \sin^4(x)]\cos(x)}dx \\\
        & = \dfrac{\sin^3(x)}{3} - \dfrac{\sin^5(x)}{5} + C
    \end{align*}
$$

**Example3**
$$
    \begin{align*}
        \int{\sin^2(x)\cos^2(x)}dx  
        & = \int{[\dfrac{1}{2}(1 - \cos(2x))][\dfrac{1}{2}(1 + \cos(2x))]}dx \\\ 
        & = \dfrac{1}{4}\int{1 - \cos^2(2x)}dx 
        \\\
        & = \dfrac{1}{4}\int{1 - \dfrac{1}{2}[1 + \cos(4x)]}dx 
        \\\
        & = \dfrac{1}{4}x - \dfrac{1}{8}x - \dfrac{1}{32}\sin(4x) + C
    \end{align*}
$$

---
$$
    \begin{align*}
        \int_0^1\sqrt{1-x^2}dx & = \quad x = \sin(\theta), dx = \cos(\theta)d\theta \\\
        & = \int_0^{\pi/2}\cos^2(x)dx \\\
        & = \dfrac{1}{2}\int_0^{\pi/2}(1+\cos(2x))dx \\\
        & = \dfrac{\pi}{4}
    \end{align*}
$$

| Expression | Substitution | Restriction |
| :-----| ----: | :----: |
| $a^2 - x^2$ | $x = a\sin(\theta)$ | $-π/2 \le \theta \le π/2$ |
| $a^2 + x^2$ | $x = a\tan(\theta)$ | $-π/2 \le \theta \le π/2$ |
| $x^2 - a^2$ | $x = a\sec(\theta)$ | $0 \le π/2; π \le \theta \le 3π/2$ |