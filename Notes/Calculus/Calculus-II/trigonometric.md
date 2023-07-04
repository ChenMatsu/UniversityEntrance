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
**Example4**
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

**Example5**
$$
    \begin{align*}
        \int{\dfrac{1}{(x^2+4)^2}}dx & = \int{\dfrac{2\sec^2(\theta)}{((2\tan(x))^2+4)^2}}d\theta, \quad x = 2\tan(\theta) \\\
        & = \dfrac{1}{8}\int{\cos^2(\theta)}d\theta = \dfrac{1}{8}(\dfrac{\theta}{2} + \dfrac{1}{2}\sin(2\theta)) + C \\\
        & = \dfrac{1}{16}(\theta + 2\sin(\theta)\cos(\theta)) + C \\\
        & = \dfrac{1}{16}(\tan^{-1}(\dfrac{x}{2}) + \dfrac{4x}{4 + x^2}) + C
    \end{align*}
$$

**Example6**

$$
    \begin{align*}
        \int{\dfrac{\sin(x)\cos(x)}{(4\sin^4(x) - 1)^{3/2}}}dx & = \dfrac{1}{4}\int{\dfrac{du}{(u^2-1)^{3/2}}}, \quad u = 2\sin^2(x), du= 4\sin(x)\cos(x) \\\
        & = \dfrac{1}{4}\int\dfrac{\sec(\theta)\tan(\theta)d\theta}{\tan^3(\theta)}, \quad u = \sec(\theta), du = \sec(\theta)\tan(\theta)d\theta \\\
        & = \dfrac{1}{4}\int{\dfrac{\cos(\theta)}{\sin^2(\theta)}}d\theta \\\ 
        & = \dfrac{1}{4}\int{\dfrac{dw}{w^2}} = -\dfrac{1}{w} + C \\\
        & = \dfrac{-1}{4\sin(\theta)} + C = \dfrac{-u}{4\sqrt{u^2-1}} + C \\\
        & = \dfrac{-2\sin^2(x)}{4\sqrt{4\sin^4(x)-1}} + C
    \end{align*}
$$