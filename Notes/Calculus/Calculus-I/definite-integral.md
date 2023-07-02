### Definite Integral

Initial thinking: Using rectangles to approximate the area with each point on the left/middle/right endpoint to curve. With more rectangles, the approximation gets more accurate.

$$
    Area = \lim_{n\to ∞}R_n
$$


Goal: Area under curve, between two points $a$ and $b$

1. Divide interval into $n$ subintervals of width $\Delta x$
2. Choose a point $x_i$ for each subintervals
3. Form a rectangle approximation
$$
    R_n = \sum_{i=1}^nf(x_i)\Delta x
$$

$$
    \begin{align*}
        Area & = \lim_{n\to ∞}R_n \\ 
            & = \lim_{n\to ∞}\sum_{i=1}^nf(x_i)\Delta x \\ 
            & = \int_a^bf(x)dx
    \end{align*}
$$