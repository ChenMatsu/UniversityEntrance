### Conditional PDF

$$
    P_X(x) = P(X=x) \\
    P_{X|A}(x) = P(X=x|A)
$$

$$
    f_{X|A}(x) \cdot \delta \approx P(x \le X \le x + \delta|A)
$$

$$
    \begin{align*}
        f_{X|X \in A}(x) = \begin{cases} 0, & if \space x \notin A \\\ \dfrac{f_X(x)}{P(A)}, & if \space x \in A\end{cases}
    \end{align*}
$$

$$
    E[X|A] = \int xf_{X|A}(x)dx \\
    E[g(X)|A] = \int g(x)f_{X|A}(x)dx
$$