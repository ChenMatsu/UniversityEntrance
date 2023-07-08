### Taylor Inequality

$$
    \begin{align*}
        f(x) & = \sum_{i=1}^∞\dfrac{f^{(i)}(a)(x-a)^i}{i!} \\\
        & = \sum_{i=1}^n\dfrac{f^{(i)}(a)(x-a)^i}{i!} + \sum_{i=n+1}^∞\dfrac{f^{(i)}(a)(x-a)^i}{i!} = T_n(x) + R_n(x)
    \end{align*}
$$

**Goal:** $R_n(x)$ is small close to $a$ 

> Taylor Inequality
>   If $|f^{(n+1)}(x)| \le M$ for $|x-a| \le d$
> 
>   $|R_n(x)| \le \dfrac{M}{(n+1)!}|x-a|^{n+1}$ for $|x-a| \le d$