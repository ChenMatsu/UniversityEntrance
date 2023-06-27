### The Hat Problem

- $n$ people throw their hats in a box and then pick one at random
  - All permutations equally likely
  - Equivalent to picking one hat at a time
- $X$: number of people who get thier own hat
  - Find $E[X]$

$$
    \begin{align*}
        X_i = \begin{cases} 1, & \text{if i selects own hat} \\ 0, & \text{otherwise.} \end{cases} \\
        X = X_1 + X_2 + ... + X_n \\
        E[X_i] = E[X_1] = P(X_1 = 1) = \dfrac{1}{n} \\
        E[X] = E[X_1] + ... + E[X_n] = n * \dfrac{1}{n} = 1 \\
        E[X_i^2] = E[X_1^2] = E[X_1] = \dfrac{1}{n} \\
        E[X_iX_j] = E[X_1X_2] = P(X_1X_2 = 1) \\ = P(X_1 = 1, X_2 = 1) = P(X_1=  1)P(X_2=1|X_1=1) = \dfrac{1}{n} * \dfrac{1}{n-1} \\
        V[X] = E[X^2] - E[X]^2 = 2 - 1 = 1 \\
    \end{align*}
$$