### Diffferentiability

**Single Variable with Error Function**
$$
    \begin{align*}
        f(x_0+h)-f(x_0) & = f'(x_0)h + E(h) \\
        \lim_{h\to0}\dfrac{E(h)}{h} & = 0
    \end{align*}
$$


**Multivariable Partial Derivative with Error Function**
$$
    \begin{align*}
        f_x(x,y) & = \lim_{h\to0}\dfrac{f(x_0+h, y_0)-f(x_0, y_0)}{h} \\
        f_y(x,y) & = \lim_{k\to0}\dfrac{f(x_0, y_0 + k)-f(x_0, y_0)}{k}
    \end{align*}
$$

$$
    \begin{align*}
        f_x(x,y_) & = \lim_{\Delta x\to0}\dfrac{f(x_0+\Delta x, y_0)-f(x_0, y_0)}{\Delta x} \\ 
        f(x_0 + \Delta x, y_0) - f(x_0, y_0) & = \dfrac{∂f}{∂x}_{(x_0, y_0)} \cdot \Delta x + E_1(\Delta x)
    \end{align*}
$$

---
**Full Derivative Definition**
$$
    f(x_0 + \Delta x, y + \Delta y) - f(x_0, y_0) = f_x \cdot \Delta x + f_y \cdot \Delta y + E_1(\Delta x) + E_2(\Delta y)
$$