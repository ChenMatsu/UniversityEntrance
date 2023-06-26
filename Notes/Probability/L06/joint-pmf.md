### Joint PMF

$$
    P_{X,Y}(x,y) = P(X=x \cap Y= y)
$$

$$
    \sum_x\sum_yP_{X,Y}(x,y) = 1
$$

$$
    P_X(x) = \sum_yP_{X,Y}(x,y) \\
    P_Y(x) = \sum_xP_{X,Y}(x,y)
$$

---
$$
    P_{X,Y,Z}(x,y,z) = P(X=x \cap Y= y \cap Z=z)
$$


$$
    Z = g(X,Y) \\
    P_Z(z) = P(Z=z) = P(g(X,Y)=z) = \sum_{(x,y): g(x,y) = z}P_{X,Y}(x,y)
$$

$$
    E[g(X,Y)] = \sum_x\sum_yg(x,y)P_{X,Y}(x,y)
$$