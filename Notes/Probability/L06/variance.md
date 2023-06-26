### Variance

- Random variable $X$, with mean $\mu = E[X]$
- Distance from the mean: $X - \mu$

$$
    E[X - \mu] = E[x] - \mu = \mu - \mu = 0
$$

$$
    V[X] = E[(X - \mu)^2] \ge 0
$$

$$
    g(x) = (x - \mu)^2 \\
    V[X] = E[g(X)] = \sum_x(x-\mu)^2P_x(x)
$$

$$
    \sigma_X = \sqrt {V(X)}
$$

**Properties**
- $V[aX+b] = a^2V[X]$
- $V[X] = E[X^2] - (E[X])^2$

$$
    Y = X + b \\
    V[Y] = E[(Y - \mu)^2] = E[(X + b - (\mu + b))^2] = E[(X - \mu)^2] = V[X]
$$

$$
    Y = aX \\
    V[X] = E[(aX - a\mu)^2] = E[a^2(X-\mu)^2] = a^2E[X]
$$

$$
    V[X] = E[(X - \mu)^2] = E[X^2 - 2\mu X + \mu^2] = E[X^2] - 2\mu E[x] + \mu^2 = E[X^2] - (E[X])^2
$$

