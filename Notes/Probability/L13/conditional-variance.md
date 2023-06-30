### Conditional Variance

$$
    V[X] = E[(X - E[X])^2] \\
    V[X|Y = y] = E[(X-E[X|Y=y]^2)|Y = y]
$$

**Law of Total Variance**
$$
    V[X] = E[V(X|Y)] + V(E[X|Y])
$$

$$
    V[X|Y=y] = E[X^2|Y=y] - E[X|Y=y]^2 \\
    V[X|Y] = E[X^2|Y] - E[X|Y]^2 \\
    E[V[X|Y]] = E[X^2] - E[E[X|Y]^2] \\
    V[E[X|Y]] = E[E[X|Y]^2] - E[E[X|Y]]^2
$$

