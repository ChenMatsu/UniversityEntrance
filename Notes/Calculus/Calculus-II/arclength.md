### Arc Length

$$
    \begin{align*}
        \text{Arc Length} \approx \sum_{i=1}^n\sqrt{(\Delta x)^2 + (\Delta y_i)^2} & = \sum_{i=1}^n\sqrt{(\Delta x^2) + (\Delta xf'(x_i^{*}))^2}, \quad f'(x_i^{*}) = \dfrac{\Delta y_i}{\Delta x_i} \\\
        & = \sum_{i=1}^n\sqrt{1 + (f'(x_i^{*}))^2} \Delta x \\\
        & = \int_a^b{\sqrt{1 + f'(x)^2}}dx
    \end{align*}
$$

**Example**
$$
    y = \sqrt{1-x^2}, y' = \dfrac{-x}{\sqrt{1-x^2}} \\\
    L = \int_{-1}^1{\sqrt{1 + \dfrac{x^2}{1-x^2}}}dx = \int_{-1}^1{{\dfrac{1}{\sqrt{1-x^2}}}}dx = \arcsin{1} - \arcsin{-1} = π
$$