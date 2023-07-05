### Integrals

**Example1: U-substitution**
$$
    \begin{align*}
        \int{xe^{x^2}}dx & = \dfrac{1}{2}\int{e^u}du, \quad u = x^2, du = 2xdx \\\
        & = \dfrac{1}{2}e^{x^2} + C
    \end{align*}
$$

**Example2: IBP**
$$
    \begin{align*}
        \int{x^2\sin(x)dx}& =  -x^2\cos(x) + x\sin(x) + cox(x) + C
    \end{align*}
$$

**Example3: Trig Pythagorean**
$$
    \int{\sin^3(x)\cos^2(x)}dx = \int{\sin(x)[1-\cos^2(x)]\cos^2(x)}dx = \dfrac{1}{5}\cos^2(x) - \dfrac{\sin^3(x)}{3} + C
$$

**Example4**
$$
    \int{\dfrac{\sqrt{25x^2-4}}{x}}dx = \sqrt{25x^2-4} - 2\sec^{-1}(\dfrac{5x}{2}) + C, \quad x = \dfrac{2}{5}\sec(\theta) 
$$

**Example5**
$$
    \begin{align*}
        \int{\dfrac{x^2\ln(x)}{(1+x^3)^2}}dx & = \dfrac{1}{9}\int{\dfrac{\ln(u)}{(1+u)^2}}du, \quad u = x^3, du = 3x^2dx, x = u^{1/3} \\\
        & = \dfrac{1}{9}[-\ln(u)(1+u)^{-1} + \int{\dfrac{1}{u(1+u)}du}], \quad v = \ln(u), du = \dfrac{1}{u}du, dw = \dfrac{du}{(1+u)^2}, w = -\dfrac{1}{(1+u)} \\\
        & = \dfrac{1}{9}[\ln(u) - \ln(1+u) - \ln(u)(1+u)^{-1}] + C \\\
        & = \dfrac{1}{9}[\ln(x^3) - \ln(1+x^3) - \ln(x^3)(1+x^3)^{-1}] + C
     \end{align*}
$$