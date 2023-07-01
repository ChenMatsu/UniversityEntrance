### Derivative

Goal: What is the slope of the tangent line at a point? 
Idea: Approximate by slope of secant line from $a$ to $a + h$

**Secant Line**

$$
    \text{Slope of secant line}: \dfrac{f(a+h) - f(a)}{(a+h) - a}
$$

**Tangent Line**

$$
    \lim_{h\to 0}\dfrac{f(a+h) - f(a)}{h} = f'(a)
$$

> See **Derivative** as a function of $x$

**Example1**
$$
    \begin{align*}
        f(x) & = \dfrac{1}{x} \\
        \lim_{h\to 0}\dfrac{\dfrac{1}{x+h} - \dfrac{1}{x}}{h} & = \lim_{h\to 0}\dfrac{\dfrac{x - (x+h)}{x(x+h)}}{h} = \lim_{h\to 0}\dfrac{-1}{x(x+h)} = -\dfrac{1}{x^2} = f'(x)
    \end{align*}
$$

**Example2**

$$
    \begin{align*}
        f(x) & = x + \dfrac{1}{x + 1} \\ 
        \lim_{h\to 0}\dfrac{f(x+h) - f(x)}{h} & = \lim_{h\to 0}\dfrac{[(x+h)+\dfrac{1}{(x+h) + 1}] - [x + \dfrac{1}{x+1}]}{h} \\ & = \lim_{h\to 0}\dfrac{h + \dfrac{(x+1) - (x+h+1)}{(x+h+1)(x+1)}}{h} \\ & =  \lim_{h\to 0}1 + \dfrac{-1}{(x+h+1)(x+1)} = 1 - \dfrac{1}{(x+1)^2}
    \end{align*}
$$

**Example3**

$$
    f(x) = c, \quad c \in R \\
    \dfrac{d}{dx}f(x) = 0
$$

**Example4**

$$
    \begin{align*}
        f(x) & = x^2 \\
        \dfrac{d}{dx}x^2 & = \lim_{h\to 0}\dfrac{(x+h)^2 - x^2}{h} \\ & = \lim_{h\to 0}\dfrac{x^2 + 2xh + h^2 - x^2}{h} = \lim_{h\to 0}(2x + h) = 2x
    \end{align*}
$$

**Example5**

$$
    \begin{align*}
        f(x) = e^x \\
        f'(x) = e^x
    \end{align*}
$$