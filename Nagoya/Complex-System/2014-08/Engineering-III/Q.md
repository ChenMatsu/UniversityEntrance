名古屋大学　大学院情報学研究科　2015年度博士前期課程入試問題 工３

時間関数 $f(t)$ のラプラス変換された関数を $F(s)$ のように書くことにする。

図１に示すブロック線図のフィードバック制御系について, 以下の問いに答えよ。ただし, 図中の $K$ は非負の実数である。

\[1] 一巡伝達関数（開ループ伝達関数） $L(s)$ を求めよ。

$$
    \begin{align*}
        L(s) & = \dfrac{K(s+2)}{s(s+1)}
    \end{align*}
$$

\[2] 入力 $R(s)$ から 出力 $Y(s)$ までの伝達関数（閉ループ伝達関数） $G(s)$ を求めよ。

$$
    \begin{align*}
        G(s) & = \dfrac{L(s)}{1+L(s)} = \dfrac{K(s+2)}{s^2+(K+1)s+2K}
    \end{align*}
$$

\[3] $K$ の値を $0$ から ∞ まで連続的に変化させたときに, 系の特性方程式の根が複素平面上に描く軌跡を根軌跡という。実軸上の部分を除く根軌跡が円であることを証明せよ。また, 円の中心座標と半径を数値で示せ。

$$
    \begin{align*}
        & 1 + L(s) = s^2 + (K+1)s + 2K = 0 \\\
        & n = 2, m = 1
    \end{align*}
$$

$$
    \begin{align*}
        & θ = \dfrac{Nπ}{n - m} = \dfrac{Nπ}{2-1} = Nπ, \quad N = \pm1, \pm3,... \\\
        & \therefore \text{the root locus is a circle.}
    \end{align*}
$$

$$
    \begin{align*}
        & \text{A system with only two poles and only one zero, the center is in the zero O(-2,0)}
    \end{align*}
$$

\[4] 根軌跡（実軸上の部分を含む）を描け。なお, 図中に $K = 1$ としたときの一巡伝達関数の極をｘ印, 零点を〇印で示すとともに, それらの座標値を示せ。

$$

$$  

\[5] ステップ応答が振動的である場合に, 減衰係数が最も小さくなる $K$ の値を求めよ。

$$
  \begin{align*}
    & ω_n = \sqrt{2}, \quad ζ = \dfrac{K+1}{\sqrt{8K}} \\
    \dfrac{dζ}{dK} & = \dfrac{(K+1)'(\sqrt{8K}) - (K+1)(\sqrt{8K})'}{(\sqrt{8K})^2} = \dfrac{1(\sqrt{8K}) - (K+1)(\dfrac{8}{2\sqrt{8K}})}{8K} \\ & = \dfrac{8K - 4(K+1)}{(8K)^{3/2}} = \dfrac{4(K-1)}{(8K)^{3/2}} = 0, \quad K = 1
  \end{align*}
$$

\[6] 入力 $r(t) = 10\sin(2t)$ が与えられるとき, 定常状態における出力 $y(t)$ を求めよ。ただし, $K = 1$ とする。

$$
   \begin{align*}
        & G(jω) = \dfrac{jω + 2}{2-ω^2+2jω} \\
        & G(jω)_{ω=2} = \dfrac{2j + 2}{4j - 2} \\
        & 10|G(jω)|_{ω=2} = 10\dfrac{|2j+2|}{|4j-2|} = 10\dfrac{\sqrt{8}}{\sqrt{20}} = 2\sqrt{10} = y(t)
   \end{align*}
$$

<p align="center">
    <img src="https://gcdnb.pbrd.co/images/8M4h2hn0LWTi.png?o=1"/>
</p>
