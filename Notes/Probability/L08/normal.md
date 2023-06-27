### Normal(Gaussian)

- Central Limit Theorem

$$
    N(0, 1): f_X(x) = \dfrac{1}{\sqrt {2\pi}}e^{-\dfrac{x^2}{2}}
$$

$$
    E[X] = 0 \\
    V[X] = 1 
$$

$$
    N(\mu, \sigma^2): f_X(x) = \dfrac{1}{\sigma\sqrt {2\pi}}e^{-\dfrac{(x-\mu)^2}{2\sigma^2}}
$$

$$
    E[X] = \mu \\
    V[X] = \sigma^2
$$

$$
    \text{Let } Y = aX + b \quad X \sim N(\mu, \sigma^2) \\
    E[Y] = a\mu + b \\
    V[Y] = a^2\sigma^2 \\
    Y \sim N(a\mu + b, a^2\sigma^2)
$$

**Standardization**

$$
    Y = \dfrac{X - \mu}{\sigma}
$$