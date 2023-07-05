### Math Proof and Tricky Integrals

**Example1**
$$
    \begin{align*}
        \int{\arcsin^2(x)}dx & = x\arcsin^2(x) - 2\int{\dfrac{x\arcsin(x)}{\sqrt{1-x^2}}}, \quad u = \arcsin^2(x), du = 2\arcsin(x)\dfrac{1}{\sqrt{1-x^2}}, v = x \\\
        & = x\arcsin^2(x) + 2\arcsin(x)(1-x^2)^{1/2} - 2\int{\dfrac{\sqrt{1-x^2}}{\sqrt{1-x^2}}}dx \quad du = \dfrac{1}{\sqrt{1-x^2}}dx, v = -(1-x^2)^{1/2} \\\
        & = x\arcsin^2(x) + 2\arcsin(x)(1-x^2)^{1/2} + 2x + C
    \end{align*}
$$

**Example2**
$$
    \begin{align*}
        \int{\dfrac{1}{1-tan^2(x)}}dx & = \int{\dfrac{1}{1-u^2}\dfrac{1}{1+u^2}}dx, \quad u = \tan(x), du = \sec^2(x)dx \\\
        & = \dfrac{1}{4}\ln(1-u) + \dfrac{1}{4}\ln(1+u) + \dfrac{1}{2}\arctan(u) + C \\\
        & = \dfrac{1}{4}\ln(1-\tan(x)) + \dfrac{1}{4}\ln(1+\tan(x)) + \dfrac{x}{2} + C 
    \end{align*}
$$

**Example3**
$$
    \begin{align*}
        \int{\dfrac{\sqrt{x+1} - \sqrt{x-1}}{\sqrt{x+1} + \sqrt{x-1}}}dx & = \int{\dfrac{\sqrt{x+1} - \sqrt{x-1}}{\sqrt{x+1} + \sqrt{x-1}}} \cdot \dfrac{\sqrt{x+1} - \sqrt{x-1}}{\sqrt{x+1} - \sqrt{x-1}}dx \\\
        & = \int{\dfrac{2x - 2\sqrt{(x-1)(x+1)}}{2}}dx \\\
        & = \dfrac{x^2}{2} - \int{\sqrt{x^2-1}}dx + C_1 \\\
        & = \dfrac{x^2}{2} - \int{\tan^2(θ)\sec(θ)}dθ \\\
        & = \dfrac{x^2}{2} - \int{\dfrac{\sin^2(θ)}{\cos^4(θ)}\cos(θ)}dθ \\\
        & = \dfrac{x^2}{2} - \int{\dfrac{u^2}{(1-u^2)^2}}du, \quad u = \sin(θ), du = \cos(θ)dθ \\\
        & = \dfrac{x^2}{2} - \dfrac{1}{4}[\ln(1-u) + \ln(1+u) - \dfrac{1}{1-u} + \dfrac{1}{u}] + C_2 \\
        & = \dfrac{x^2}{2} - \dfrac{1}{4}[\ln(1-\dfrac{\sqrt{x^2-1}}{x}) + \ln(1+\dfrac{\sqrt{x^2-1}}{x}) - \dfrac{1}{1-\dfrac{\sqrt{x^2-1}}{x}} + \dfrac{1}{\dfrac{\sqrt{x^2-1}}{x}}] + C_2
    \end{align*}
$$