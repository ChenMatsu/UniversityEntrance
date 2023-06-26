### Geometric


**Memoryless**: Number of remaining coin tosses, conditoned on Tails in the first toss is Geometric with parameter p

Conditioned on $X > n, X - n$ is geometric with parameter $p$

$$
    E[X] = \sum_{k=1}^∞kP_x(k) = \sum_{k=1}^∞k(1-p)^{k-1}p
$$



**Example**

$$
    P(X - 1 = 3 | X > 1) = P(T_2, T_3, H_4 | T_1) = P(T_2, T_3, H_4) = P_X(3) = (1-p)^2p
$$