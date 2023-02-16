> 名古屋大学　大学院情報学研究科　2023年度博士前期課程入試問題　数２−２

以下の各問に答えよ。ただし、
$$ y' = \dfrac{dy}{dx} $$ 

$$ y'' = \dfrac{d^2y}{dx^2} $$

[１]以下の微分方程式を求めよ

１）
$$ y'' + 4y' + 4y = 0 $$

答：

$$\lambda ^2 + 4\lambda + 4 = 0$$

$$\lambda = -2(2重解)$$

$$y = e^{-2x}(C_1 + C_2x)$$

２）
$$ y'' - 3y' + 2y = e^x $$

答：

$$ (\lambda - 2)(\lambda - 1) = 0 $$

$$ \lambda = 1, 2 $$

$$ y = Axe^x $$

$$ y' = Ae^x + Axe^x $$

$$ y'' = Ae^x + Ae^x + Axe^x = 2Ae^x + Axe^x $$

$$ (2Ae^x + Axe^x) - 3(Ae^x + Axe^x) + 2Axe^x = e^x $$

$$ A = -1 $$

$$ y = C_1e^x + C_2e^{2x} - xe^x $$

---
[２]以下の各問に答えよ

１）
$y' = f(\dfrac{y}{x})$の形の微分方程式、$v = \dfrac{y}{x}$と変数変換することにより、変数分離型に帰着できることを示せ

答：

$$ vx = y $$

$$ vdx + xdv = dy$$

$$ \dfrac{vdx + xdv}{dx} = f(v)$$

$$ v + x\dfrac{dv}{dx} = f(v)$$

$$ x\dfrac{dv}{dx} = f(v) - v$$

$$ \dfrac{dv}{\{f(v) - v\}dx} = \dfrac{1}{x}$$

$$ \int \dfrac{dv}{f(v) - v} = \int \dfrac{1}{x}dx$$

２）
微分方程式$y' = \dfrac{x-y}{x+y}$を解け

答：

$$  dy(x + y) = dx(x - y)$$

$$  y = ux, dy = udx + xdu$$

$$ (udx + xdu)(x + ux) = dx(x - ux)$$

$$ uxdx + u^2xdx + x^2du + ux^2du = xdx - uxdx$$

$$ (u^2 + 2u - 1)xdx = -(u + 1)x^2du$$

$$ \dfrac{x}{x^2}dx = -\dfrac{u + 1}{u^2 + 2u - 1}du$$

$$ \int \dfrac{x}{x^2}dx  = -\dfrac{1}{2}\int \dfrac{2u + 2}{u^2 + 2u - 1}du $$

$$ ln|x| + C = ln|u^2 + 2u - 1|^{-1/2}$$

$$ e^{ln|x| + C} = e^{ ln|u^2 + 2u - 1|^{-1/2} }$$

$$ Cx = \dfrac{1}{ \sqrt{u^2 + 2u - 1} }$$

$$ Cx^2(u^2+2u-1) = 1$$

$$ Cx^2\{(\dfrac{y}{x})^2 + 2(\dfrac{y}{x}) - 1\} = 1$$

$$ C(y^2 + 2xy - x^2) = 1$$

$$ (y + x)^2 - 2x^2 = 1 / C = m$$

$$ y = -x \pm \sqrt{2x^2 + m}$$

[3]