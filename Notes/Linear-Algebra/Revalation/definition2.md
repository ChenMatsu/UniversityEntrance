### 基本定理二

令A為一個$m*n$階實矩陣。根據**秩-零度定理**：

$$ n = dim(N(A)) + dim(C(A)) $$

矩陣A的列空間(Row Space)是轉置矩陣$A^T$的行空間(Column Space)，故$C(A^T)$表示A的列空間。因為行秩(Column Rank)等同於列秩(Row Rank)：

$$ rankA = dim(C(A)) = dim(C(A^T)) = r$$

$$ n = dim(N(A)) + dim(C(A^T)) $$

統一對A矩陣進行轉置

$$ m = dim(N(A^T)) + dim(C(A)) $$

$$ C(A^T), N(A) \in  R^n $$

$$ C(A), N(A^T) \in R^m $$

- $N(A^T)$: 左零空間(Left Nullspace)

<p align="center">
    <img src="https://ccjou.files.wordpress.com/2009/05/fund-theorem1.jpg?w=200&h=300&zoom=2" />
</p>

假設S和T為向量空間$R^p$的兩個子空間。

根據幾何向量空間標準內積定義正交：對於$x, y \in R^p$，若$x^Ty = 0$，則代表 $x \perp y$。若S中的任意向量皆與T的任意向量y正交，我們稱S正交於T，記作$S \perp T$。給定子空間S，向量空間$R^p$中所有與S正交的向量集合稱為正交補餘(Orthogonal Complement)，記作$S^{\perp}$，滿足：

$$ p = dimS + dimS^{\perp}, S \cap S^{\perp} = \{0\} $$

$$ x \in S \cap T, ||x||^2 = x^Tx = 0 $$

#### 基本子空間的正交關係

$$ N(A) = C(A^T)^{\perp} $$
$$ N(A^T) = C(A)^{\perp} $$

矩陣的子空間正交關係可以透過正交補餘定義推演。矩陣A的零空間中的向量$x$與A的列向量都正交：

$$ Ax = \begin{bmatrix} row_1 \\ row_2 \\ \vdots \\ row_m \end{bmatrix} x = \begin{bmatrix} 0 \\ 0 \\ \vdots \\ 0 \end{bmatrix} $$

根據矩陣乘法可以推得內積都是0，所以向量$x$必定與所有列向量的線性組合正交，可得$N(A) \perp C(A^T)$，再根據秩-零度空間定理可知$N(A) = C(A^T)^{\perp}$

假設$y \perp N(A)$且$y \notin C(A^T)$。將$y$加入列空間$C(A^T))$，顯然會增加其維度。根據秩-零度空間定理$dim(C(A^T)) = n - dim(N(A))$，兩者維度不同，產生矛盾，因此$y \notin C(A^T)$不可能成立。

對矩陣A取轉置後，同理得正$N(A^T) = C(A)^{\perp}$。$A^Ty = 0$/等同於$y^TA = 0^T$，因向量位於A的左方，故名為左零空間。

<p align="center">
    <img src="https://ccjou.files.wordpress.com/2009/05/fund-theorem2.jpg?w=200&h=300&zoom=2" />
</p>

#### 參考網址
> [線性基本定理](https://ccjou.wordpress.com/2009/05/06/線性代數基本定理-二/)