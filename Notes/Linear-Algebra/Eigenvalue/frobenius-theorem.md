## フロベニウス定理

n次正方行列Aは、$\lambda_1$, $\lambda_2$, ... ,$\lambda_n$を固有値に持つとする。

行列Xの多項式

$$ f(X) = a_0X^n + a_1X^{n-1} + ... + a_{n-1}X + a_nE $$

f(A)の固有値は$f(\lambda_1)$,$f(\lambda_2)$,...,$f(\lambda_n)$

$$ P^{-1}AP = \begin{bmatrix} \lambda_1 & a_{12} & \cdots & a_{1n} \\ 0 & \lambda_2 & \dots & a_{2n} \\ \vdots & \vdots & \ddots & \vdots \\ 0 & 0 & \cdots & \lambda_n  \end{bmatrix}　$$

$$ P^{-1}f(A)P = P^{-1}(a_0A^n + a_1A^{n - 1} + ... + a_nE)P = $$
$$ a_0P^{-1}A^nP + a_1P^{-1}A^{n-1}P + ... + a_nE = $$
$$ a_0(P^{-1}AP)n + a_1(P^{-1}AP)^{n-1} + ... + a_nE =  $$
$$ f(P^{-1}AP) $$