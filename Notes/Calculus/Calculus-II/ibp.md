### Integration By Parts

$$
    \dfrac{d}{dx}(f \cdot g) = f'g + fg'
$$

$$
    f \cdot g = \int f'gdx + \int fg'dx \\\ \to 
    \int fg'dx = f \cdot g - \int f'gdx
$$

**Example1**

$$
    \begin{align*}
        \int x^7\sqrt{1+x^4} & = \int (u-1)\sqrt{u}du, \quad u = 1 + x^4, du = 4x^3dx \\\
        & = \dfrac{1}{4}\int{u}^{3/2} - \sqrt{u}du \\\
        & = \dfrac{1}{4}[\dfrac{2}{5} (1 + x^4)^{5/2} - \dfrac{2}{3}(1+x^4)^{3/2}] + C
    \end{align*}
$$

