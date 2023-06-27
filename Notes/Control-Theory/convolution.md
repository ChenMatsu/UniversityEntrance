### Convolution of Functions

$$
    \begin{align*}
        f(t) * g(t) = \int_0^tf(τ)g(t-τ)dτ
    \end{align*}
$$

**Properties**
1. $f(t) * g(t) = g(t) * f(t)$
$$
    \begin{align*}
        f(t) * g(t) & = \int_0^tf(τ)g(t-τ)dτ \\
        \text{let } u & = t - τ \\
        & = -\int_t^0f(t - u)g(u)du \\ 
        & = \int_0^tf(t - u)g(u)du \\
        & = \int_0^tg(u)f(t - u)du \\
        & = g(t) * f(t) 
    \end{align*}
$$
2. $f * (g * h) = (f * g) * h$
3. $f * (g + h) = (f * g) * (f * h)$

> $$
>     \mathscr{L}\{f(t)g(t)\} \ne \mathscr{L}\{f(t)\}\mathscr{L}\{g(t)\} \\
>     \mathscr{L}\{f(t)*g(t)\} = \mathscr{L}\{f(t)\}\mathscr{L}\{g(t)\} \\
>     \mathscr{L^{-1}}\{F(s)G(s)\} = f(t) * g(t)
> $$

**Example**

$$
    \begin{align*}
        \mathscr{L^{-1}}\{\dfrac{1}{(s^2+1)} \cdot \dfrac{1}{(s^2+1)}\} & = \sin(t)* \sin(t) \\ & = \int_0^t\sin(τ) \sin(t-τ)dτ \\ & = \dfrac{1}{2}\int_0^t\cos(2τ - t) - cos(t)dτ \\ & = \dfrac{1}{2}[\dfrac{\sin(2τ - t)}{2}]_{0}^t - \dfrac{1}{2}t\cos(t) = \dfrac{1}{2}(\sin(t) - t\cos(t))
    \end{align*}
$$