### Sequence

$$
    \begin{align*}
        f(n) = a_n = \dfrac{1}{n}
    \end{align*}
$$

$$
    \begin{align*}
        \text{If } \lim_{x\to ∞}f(x) = L, \text{ then } \lim_{n\to ∞}a_n = L \text{ where } a_n = f(n)
    \end{align*}
$$

**Example1**

$$
    \begin{align*}
        \lim_{n\to ∞}\cos(\dfrac{n+1}{n^2}) & =\cos(\lim_{n\to ∞}\dfrac{n+1}{n^2}) \\\
        & = \cos(\lim_{n\to ∞}\dfrac{1}{n} + \lim_{n\to ∞}\dfrac{1}{n^2}) \\\
        & = \cos(0 + 0) = 1
    \end{align*}
$$

**Example2**

$$
    \begin{align*}
        \lim_{n\to ∞}(-1)^n \to  \text{D.N.E}
    \end{align*}
$$

**Example3**

$$
    \begin{align*}
        \lim_{n\to ∞}\dfrac{\ln(n)}{n^a} =  \lim_{n\to ∞}\dfrac{1/n}{an^{a-1}} = 0
    \end{align*}
$$

> Definition: 
>
> $$\lim_{n\to ∞} a_n = L $$
>
> means making $a_n$ as close to $L$ as wish by taking $n$ arbitrarily large

---

### Hierarchy

$$
    \ln(n) \ll n^a \ll b^n \ll n! \ll n^n
$$

> For any two monotonic functions $f, g$. We say $f \ll g$ if $\lim_{x\to ∞}\dfrac{f}{g} = 0$, and we say $f \sim g$ if $\lim_{x\to ∞}\dfrac{f}{g} = K$ for some real K > 0.