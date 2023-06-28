### Curve

1. Break $[a, b]$ into $n$ segments
$$
    \text{Arclength} \approx \sum_{i=1}^n(\text{Length of i segment})
$$
2. Compute length of $i$ segment
$$
    \begin{align*}
        \Delta L_i & = \sqrt{(\Delta x_i)^2 + (\Delta y_i)^2 + (\Delta z_i)^2} \\ \text{Arclength} & \approx \sum_{i=1}^n\sqrt{(\Delta x_i)^2 + (\Delta y_i)^2 + (\Delta z_i)^2} \\ & = \sum_{i=1}^n\sqrt{(\dfrac{\Delta x_i}{\Delta t})^2 + (\dfrac{\Delta y_i}{\Delta t})^2 + (\dfrac{\Delta z_i}{\Delta t})^2}\Delta t
    \end{align*}
$$

$$
    \begin{align*}
        \text{Arclength} & = \lim_{n\to∞}\sum_{i=1}^n\sqrt{(\dfrac{\Delta x_i}{\Delta t})^2 + (\dfrac{\Delta y_i}{\Delta t})^2 + (\dfrac{\Delta z_i}{\Delta t})^2}\Delta t \\ & = \int_a^b \sqrt{f^{'}(t) + \hat i + g^{'}(t) + \hat j + k^{'}(t) + \hat k} \\ \text{ for } \vec r(t) & = f(t)\hat i + g(t)\hat j + h(t)\hat k
     \end{align*}
$$