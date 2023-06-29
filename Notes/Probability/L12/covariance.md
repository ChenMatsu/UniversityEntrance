### Covariance

**Independent**
$$
    E[XY] = E[X]E[Y]
$$

$$
    Cov(X,Y) = E[(X-E[X])\cdot(Y-E[Y])] = E[X-E[X]]E[Y-E[Y]] = 0
$$

---
**Properties**
1. $Cov(X,X) = E[(X-E[X])^2] = V[X] = E[X^2] - E[X]^2$
2. $Cov(X,Y) = E[XY] - E[X]E[Y]$
3. $V[X_1 + ... + X_n] = E[\sum_{i=1}^nX_i^2 + \sum_{i \ne j}X_iX_j] \\ = \sum_{i=1}^nV[X_i] + \sum_{i \ne j}Cov(X_i, X_j)$


**Example**
$$
    \begin{align*}
        V[X_1 + X_2] & = E[(X_1 + X_2 - E[X_1 + X_2])^2] \\
        & = E[((X_1 - E[X_1]) + (X_2 - E[X_2]))^2] \\ 
        & = E[(X_1 - E[X_1])^2 + (X_2 - E[X_2])^2 + 2(X_1 - E[X_1])(X_2 - E[X_2])] \\ 
        & = V[X_1] + V[X_2] + 2Cov(X_1, X_2)
    \end{align*}
$$