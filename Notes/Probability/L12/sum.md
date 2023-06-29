### Sum of Independent Variables

$$
    \begin{align*}
        Z = X + Y; X, Y \text{ independent}
    \end{align*}
$$

**Discrete**

$$
    \begin{align*}
        P_Z(z) = \sum_{x}P_X(x)P_Y(z-x)
    \end{align*}
$$  

1. Flip the PMF of $Y$
2. Put fliped $Y$ underneath the PMF of $X$
3. Right-shift the flipped PMF by $z$
4. Cross-multiply and add 

**Continuous**

$$
    \begin{align*}
        f_Z(z) = \int_{-∞}^∞f_X(x)f_Y(z-x)dx = \int_{-∞}^∞f_{X,Y}(x,z)dx
    \end{align*}
$$  



