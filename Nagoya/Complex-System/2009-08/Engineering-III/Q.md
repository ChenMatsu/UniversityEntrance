名古屋大学　大学院情報学研究科　2010年度博士前期課程入試問題 工３

図１のように, ばね定数 $K$ のばねと粘性係数 $C$ のダンパが接続され, ダンパの一端固定されている。ばねの右と左の端をそれぞれ点 $A$ と $B$ とし, 時刻 $0$ から時刻 $t$ の間いで計測される点 $A$ と 点 $B$ の変位をそれぞれ $x(t)$ と $y(t)$ で表す（すなわち, $x(0) = 0$ および $y(0) = 0$）。なお, ばねの質量, ダンパの質量および空気抵抗は無視できるものとする。

\[1] ダンパに加わる力 $f$ を $x, y$ および $K$ で表せ。

$$
    \begin{align*}
        f(t) = K\{x(t) - y(t)\}
    \end{align*}
$$

\[2] ダンパに加わる力 $f$ は次式から計算される。

$$
    f = C\dfrac{dy}{dt} \quad \text{(1)}
$$

$$
    \begin{align*}
        & C\dot{y}(t) = K\{x(t) - y(t)\} \\\ 
        & C\dot{y}(t) + Ky(t) = Kx(t)
    \end{align*}
$$

式（１）に\[1]の結果を代入して, 図１のばね-ダンパ系の微分方程式を完成せよ。

\[3] $x$ と $y$ をそれぞれ入力と出力とするとき, このばね-ダンパ系の伝達関数 $G(s)$ を求めよ。

$$
    \begin{align*}
        & Y(s)\{Cs+K\} = KX(s) \\\
        & G(s) = \dfrac{Y(s)}{X(s)} = \dfrac{K}{Cs+K}
    \end{align*}
$$

\[4] 入力を $x = \sin{ωt}$ とするとき, 出力 $y(t)$ を求めよ。

$$
    \begin{align*}
        G(jω) & = \dfrac{K}{jCω + K} \\\
        |G(jω)|_{ω = ω} & = \dfrac{K}{K+jCω}\cdot\dfrac{K-jCω}{K-jCω} = \dfrac{K(K-jCω)}{K^2+(Cω)^2}| \\\
        & = \dfrac{|K||K-jCω|}{|K^2+(Cω)^2|} = \dfrac{K\sqrt{K^2 + (Cω)^2}}{\sqrt{(K^2)^2 + [(Cω)^2]^2}} \\\
        & = \dfrac{K}{\sqrt{K^2+(Cω)^2}} = y(t) 
    \end{align*}
$$

\[5] 次式で表される要素 $P(s)$ を加えて, 図２示すようなフィードバック制御系を構成した。

$$
    P(s) = \dfrac{3}{2s(s+1)}
$$

$K = 2$ および $C = 1$ とするとき, この制御系のゲイン余裕を求めよ。

$$
    \begin{align*}
        G(s)P(s) & = \dfrac{2}{s+2} \cdot \dfrac{3}{2s(s+1)} = \dfrac{3}{s(s+1)(s+2)} \\\
        G(jω)P(jω) & = \dfrac{3}{jω(jω + 1)(jω + 2)} = -3\dfrac{1}{3w^2 + j(ω^3 - 2ω)} \cdot \dfrac{3w^2 - j(ω^3 - 2ω)}{3w^2 - j(ω^3 - 2ω)} \\\
        & = -3\dfrac{3w^2 - j(ω^3 - 2ω)}{(3w^2)^2 + (ω^3 - 2ω)^2} \\\ 
        & ω^3 - 2ω = 0, \quad ω_{cp} = \sqrt{2} \\\

        |G(jω)P(jω)| & =  \dfrac{3}{\sqrt{(3w^2)^2 + (ω^3 - 2ω)^2}}
    \end{align*}
$$

$$
    \begin{align*}
        g_m & = -g(ω_{cp}) = -20\log_{10}(|G(jω_{cp})P(jω_{cp})|) = -20\log_{10}(|\dfrac{-3}{(3 \cdot 2)}|) = -20\log_{10}(|\dfrac{3}{(3 \cdot 2)}|) \\\
        & = -20\log_{10}(\dfrac{1}{2}) = 20\log_{10}(2) = 20 \cdot 0.301 \\\
        & = 6.02 \text{ [dB]}
    \end{align*}
$$

<p align="center">
    <img src="https://gcdnb.pbrd.co/images/z5QpJXHSFriI.png?o=1"/>
</p>
