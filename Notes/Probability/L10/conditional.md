### Conditional PDFs

$$
    P_{X|Y}(x|y) = P(X=x|Y=y) = \dfrac{P_{X,Y}(x,y)}{P_Y(y)}
$$

$$
    f_{X|Y}(x|y) = \dfrac{f_{X,Y}(x,y)}{f_Y(y)}
$$

$$
    P(x \le X \le x + \delta|y \le Y \le y + \epsilon) \approx \dfrac{f_{X,Y}(x,y)\delta}{f_y(y)} = f_{X|Y}(x|y)\delta
$$

$$
    P(X \in A|Y = y) = \int_Af_{X|Y}(x|y)dx
$$

$$
    \int_{-∞}^∞f_{X|Y}(x|y)dx = \dfrac{\int_{-∞}^∞f_{X,Y}(x,y)dx}{f_Y(y)} = 1
$$

$$
    f_{X,Y}(x,y) = f_Y(y) \cdot f_{X|Y}(x|y) = f_X(x) \cdot f_{Y|X}(y|x)
$$