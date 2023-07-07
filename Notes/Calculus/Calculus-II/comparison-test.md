### Comparison Test

$$
    \begin{align*}
        & 0 \le a_n \le b_n \\\
        & \sum_{n=1}^∞ a_n \text{ diverges } \to \sum_{n=1}^∞ b_n \text{ diverges } \\\
        & \sum_{n=1}^∞ b_n \text{ converges } \to \sum_{n=1}^∞ a_n \text{ converges } \
    \end{align*} 
$$

**Example1**

$$
    \begin{align*}
        & \sum_{n=1}^∞ \dfrac{n-1}{2n^3 + n^2} \text{ converges .} \\\
        & a_n = \dfrac{n-1}{2n^3 + n^2} < \dfrac{n}{2n^3 + n^2} < \dfrac{1}{2n^2} = b_n \\\
    \end{align*}
$$

### Limit Comparison

$$
    \lim_{n\to ∞} \dfrac{a_n}{b_n} = L
$$

> This indicates that $a_n$ and $b_n$ behaves similar for large number $n$
>
> Limit Comparison Test:
>
> For $\sum a_n$ and $\sum b_n$ series with positive terms. If
>
> $$
>    \lim_{n\to ∞} \dfrac{a_n}{b_n} = c > 0
> $$
>
> Either both converge, or both diverge.