### Expectation/Mean
> Average in large number of independent repetitions of the experiment

$$
    E[X] = \sum_x xP_X(x)
$$

**Caution:** If we have an infinite sum, it needs to be well-defined. 

$$
    E[X] = \sum_x |x|P_X(x) < ∞
$$

**Expectation of Bernoulli**

$$
    \begin{align*}
        X = \begin{cases} 1, & p \\ 0,  &  1-p \end{cases} \\
        E[X] = 1 * p + 0 * (1-p) = p
    \end{align*}
$$

**Expectation of Uniform**

$$
    \text{Uniform on} \quad 0, 1, ..., n \\
    E[X] = \dfrac{1}{n+1} * \dfrac{n(n+1)}{2} = \dfrac{n}{2}
$$

**Properties**

- If $X \ge 0$, then $E[X] \ge 0$
- If $a \le X \le b$, then $a \le E[X] \le b$
- If $c$ is a constant, $E[c] = c$
- Linearity
  - $E[aX+b] = aE[X] + b$

**Expectation Rule**

- Let $X$ be a r.v. and let $Y = g(X)$
- Averaging over $E[Y] = \sum_y yP_Y(y)$

$$
    E[Y] = E[g(X)] = \sum_xg(x)P_X(x)
$$

**Proof**

$$
    \begin{align*}
        \sum_{y}\sum_{x: g(x) = y}g(x)P_X(x) & = \sum_{y}\sum_{x: g(x) = y}yP_X(x) \\ & = \sum_{y}y\sum_{x: g(x) = y}P_X(x) \\ & = \sum_{y}yP_Y(y) = E[Y]
    \end{align*}
$$

**Caution:** $E[g(X)] \ne g(E[X])$

