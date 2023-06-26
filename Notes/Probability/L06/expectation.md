### Expectation

- $E[aX + b] = aE[X] + b$
- $E[X + Y] = E[X] + E[Y]$

$$
    \begin{align*}
        E[X + Y] & = E[g(X,Y)] \\ & = \sum_x\sum_y(x+y)P_{X,Y}(x,y) \\
                 & = \sum_x\sum_y(x)P_{X,Y}(x,y) + \sum_x\sum_y(y)P_{X,Y}(x,y) \\
                 & =  \sum_xx\sum_yP_{X,Y}(x,y) + \sum_xy\sum_yP_{X,Y}(x,y) \\ & =  \sum_xxP_X(x) + \sum_yyP_Y(y) = E[X] + E[Y] 
    \end{align*}
$$

**Mean of Binomial**

$$
    E[x] \sum_{k=0}^nk\begin{pmatrix}n \\\ k\end{pmatrix}p^k(1-p)^{n-k}
$$