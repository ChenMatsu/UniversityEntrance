### Conditional PMFs

$$
    P_{X|A}(x|A) = P(X=x|A) \\
    P_{X|Y}(x|y) = P(X=x|Y=y) = \dfrac{P(X=x,Y=y)}{P(Y=y)}
$$

$$
    P_{X|Y}(x|y) = \dfrac{P_{X,Y}(x,y)}{P_Y(y)}
$$

$$
    \sum_xP_{X|Y}(x|y) = 1
$$

$$
    P_{X,Y}(x,y) = P_Y(y)P_{X|Y}(x|y) \\
    P_{X,Y}(x,y) = P_X(x)P_{Y|X}(y|x)
$$

$$
    P_{X|Y,Z}(x|y,z) = P(x=x|Y|y,Z=z) = \dfrac{P(X=x,Y=y,Z=z)}{P(Y=y, Z=z)} = \dfrac{P_{X,Y,Z}(x,y,z)}{P_{Y,Z}(y,z)}
$$

$$
    P_{X,Y,Z}(x,y,z) = P_X(x)P_{Y|X}(y|x)P_{Z|X,Y}(z|x,y)
$$

