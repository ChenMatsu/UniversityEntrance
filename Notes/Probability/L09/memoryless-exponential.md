### Memoryless of the Exponential PDF

$$
    P(T > x) = e^{-\lambda x}
$$

$$
    \begin{align*}
        P(X > x|T > t) & = \dfrac{P(T - t > x, T > t)}{P(T > t)} \\ & = \dfrac{P(T > t + x, T > t)}{P(T > t)} \\ & = \dfrac{P(T > t + x)}{P(T > t)} = \dfrac{e^{-\lambda(t+x)}}{e^{-\lambda t}} = e^{-\lambda x}
    \end{align*}
$$

---

$$
    f_T(x) = \lambda e^{-\lambda x}
$$

$$
    P(0 \le T \le \delta) \equiv P(t \le T \le t + \delta | T > t)
$$