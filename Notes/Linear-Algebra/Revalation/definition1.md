### 基本定理一

#### 秩-零度定理(Rank-Nullity Theorem)

線性變換T自有限維度向量空間V(定義域)映射至有限維度向量空間VV(到達域)

$$ T: V \rightarrow W $$

$$ dim V = dim(ker(T)) + dim(R(T)) $$

<p align="center">
    <img src="https://ccjou.files.wordpress.com/2009/03/spaces-of-linear-map1.jpg?w=200&h=150&zoom=2" />
</p>

1. V具有向量集合經過T映射至零空間 $T(u) = 0$ ，該集合稱為T的核(Kernel) => ker(T)，其維度稱作零度(Nullity) => dim(ker(T))
2. V所有向量經過T映射後所成的集合，稱為T的值域(Range) => R(T)，它是W中的子空間。線性變換T的值域大小由其維數決定，稱作秩(Rank)

#### 秩-零度定理證明-矩陣運算
$$ A_{mn} $$
$$ T: V \rightarrow W $$

m*n階矩陣A，其中$n = dimV$且$m = dimW$，零空間N(A)和行空間C(A)分別代表線性變換T的核(ker T)以及值域R(T)，透過基本列運算將矩陣A化簡成RREF後，在不失一般性的原則下，以區塊矩陣表示：

$$ R = \begin{bmatrix} I_r & F \\ 0 & 0 \end{bmatrix} $$

R的軸行數為$r = rank R$，F是$r*(n - r)$階矩陣。因為列運算不改變軸數以及零空間，由此可知$rank A = rank R = r$且$N(A) = N(R)$。觀察R的形式可以寫出$n*(n-r)$階零空間矩陣P：

$$ P = \begin{bmatrix} -F \\ I_{n-r} \end{bmatrix} $$

$$ RP = \begin{bmatrix} I_r & F \\ 0 & 0 \end{bmatrix} \begin{bmatrix} -F \\ I_{n-r} \end{bmatrix} $$

零空間矩陣P的行向量組成N(R)的基底，即C(P) = N(R)。Ｐ包含分快矩陣$I_{n-r}$，Ｐ的行向量構成一個線性獨立集。接著$Rx = 0$的解必能表示為$x=Py$，換句話說，Ｐ的行向量可以擴張R的零空間。

$$ x = \begin{bmatrix} x_1 \\ x_2 \end{bmatrix} $$

其中$x_1$是r維度向量，$x_2$是n - r維度向量，使得$Rx = 0$：

$$ Rx = \begin{bmatrix} I_r & F \\ 0 & 0 \end{bmatrix} \begin{bmatrix} x_1 \\ x_2\end{bmatrix} = \begin{bmatrix} x_1 + Fx_2 \\ 0 \end{bmatrix} = 0 $$

$$ x_1 = -Fx_2 $$

$$ x = \begin{bmatrix} -Fx_2 \\ x_2 \end{bmatrix} = \begin{bmatrix} -F \\ I_{n-r} \end{bmatrix}x_2 = Px_2 $$

因此$C(P) = N(R)$，即得$dimN(R) = dimC(P) = n - r$

$$ n = dim N(A) + rank(A) $$

#### 秩-零度定理證明-向量空間分析

令$dimV = n$且$dim(ker(T)) = p (p \le n)$。設$ker(T)$的一組基底為${u_1, ... , u_p}$，擴展基底成為向量空間V的基底$\{u_1, ..., u_p, w_1, ..., w_r\}且n = p + r$

<p align="center">
  <img src="https://ccjou.files.wordpress.com/2009/03/spaces-of-linear-map2.jpg?w=200&h=300&zoom=2" />
</p>

向量空間V中任一向量v可表示為基底向量的唯一線性組合:

$$ v = a_1u_1 + ... + a_pu_p + b_1w_1 + ... + b_rw_r $$

向量v經過線性轉換T的映射後T(v)稱為像(image)。

$$ T(u_1) = ... = T(u_p) = 0 $$

$$ T(v) = T(a_1u_1 + ... + a_pu_p + b_1w_1 + ... + b_rw_r) = $$
$$ a_1T(u_1) + ... + a_pT(u_p) + b_1T(w_1) + ... + b_rT(w_r) = $$
$$ b_1T(w_1) + ... + b_rT(w_r) $$

顯然地，$T(w_1), ..., T(w_r)$擴張值域R(T)

$$ c_1T(w_1) + ... + c_rT(w_r) = 0 $$
$$ T(c_1w_1 + ... + c_rT_r) = 0 $$

上述說明$\{c_1w_1 + ... + c_rw_r\}$屬於零空間$ker(T)$

$$ c_1w_1 + ... + c_rw_r = d_1u_1 + ... + d_pu_p $$

因此$\{u_1, ..., u_p, w_1, ..., w_r\}$是V的基底，得$r = dim R(T) = rank T$

1. $dimV > dimW$
$$ dim(ker(T)) = dimV - dim(R(T)) \ge dimV - dimW > 0$$
即存在非零向量$x \in V$使得$T(X) = 0$。換句話說，T並非一對一($T(0) = 0$)

2. $dimV < dimW$
$$ dim(R(T)) = dimV - dim(ker(T)) \le dimV < dimW $$
即存在非零向量$y \in W$使得$y \notin R(T)$。換句話說，T並非滿射(Onto)

3. $n > m$
$$ dim(N(A) = n - dim(C(A)) \ge n - m > 0$$
即零空間N(A)包含非零向量。換句話說，Ax = 0有無限多組解

4. $n < m$
$$  dim(C(A)) = n - dim(N(A)) \le n < m $$
即行空間C(A)未能充滿整個$R^m(C^m)$。換句話說，Ax = b不總是存在解

#### 參考網址
> [線性基本定理](https://ccjou.wordpress.com/2009/03/23/線性代數基本定理-一/)