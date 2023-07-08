### Taylor-Maclaurin Series

$$
    f(x) \approx f(0) + f'(0)(x) + f''(0)(x)/2! + ...
$$

**Maclaurin Series**

$$
    f(x) = \sum_{n=0}^∞c_nx^n \quad |x| < R \\\
    c_n = \dfrac{f^{(n)}(a)}{n!}
$$

**Example**

$$
    f(x) = e^x, \quad a = 0 \\\
    e^x = \sum_{n=0}^∞\dfrac{(\dfrac{d^n}{dx^n}[e^x]\_{x=0})x^n}{n!} = \sum_{n=0}^∞\dfrac{x^n}{n!}
$$

**Example: Integrals**

$$
    \begin{align*}
        & \int{e^{-x^2}}dx \\\
        & e^x = \sum_{n=0}^∞\dfrac{x^n}{n!} \to  e^{-x^2} = \sum_{n=0}^∞\dfrac{(-x^2)^n}{n!} = \sum_{n=0}^∞\dfrac{(-1)^nx^{2n}}{n!} \\\
        & \therefore  \int{e^{-x^2}}dx = \sum_{n=0}^∞\dfrac{(-1)^nx^{2n+1}}{n!(2n+1)} + C
    \end{align*}
$$

**Example: Limit**

$$
    \begin{align*}
        \lim_{x\to 0}\dfrac{x^2e^x}{\cos(x) - 1} =  \lim_{x\to 0}\dfrac{x^2(1+x+x^2/2+x^3/6+...)}{(1-x^2/2+x^4/24-x^6/720+...) - 1} = -2
    \end{align*}
$$

**Example: Series**

$$
    \begin{align*}
        \dfrac{1}{0!} +  \dfrac{1}{1!} +  \dfrac{1}{2!} + \dfrac{1}{3!} + ... = e^1 = e \\\
        \dfrac{1}{0!} -  \dfrac{1}{1!} +  \dfrac{1}{2!} - \dfrac{1}{3!} + ... = e^{-1} = 1/e
    \end{align*}
$$