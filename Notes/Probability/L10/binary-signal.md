### Binary Signal - Bayes

- Unknown $K$: equally likeylt to be -1 or +1
- Measurement $Y: Y = K + W, W \sim N(0,1 )$

Probability that $K = 1$, given that $Y = y$:

$$
    P_K(k) = \dfrac{1}{2}
$$

$$
    Y|K = 1 \sim N(1,1) \\
    Y|K = -1 \sim N(-1,1) 
$$

$$
    f_{Y|K}(y|k) = \dfrac{1}{\sqrt{2}n}e^{-\dfrac{1}{2}(y-k)^2}
$$

$$
    f_Y(y) = \dfrac{1}{2}\dfrac{1}{\sqrt 2n}^{-\dfrac{1}{2}(y+1)^2} +  \dfrac{1}{2}\dfrac{1}{\sqrt 2n}^{-\dfrac{1}{2}(y-1)^2}
$$  

$$
    P_{K|Y}(1|y) = \dfrac{1}{1+e^{-2y}}
$$