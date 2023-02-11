## 対称行列の対角化

- 対称行列は直交行列を使えば絶対に対角化できる
- 直交行列は対称行列以外の行列を対角化できない

### 対称行列
> 厳密に言うなら、転置しても変わらない行列

$$ A^T = A $$

行列の成分は、実数あるいは複素数（虚数iを含む数）するわけです。が、実数の成分だけ含むの行列は**実対称行列**と呼ぶ。

### 直交行列
> 転置との積が単位行列**E**になる行列です

$$ A^TA = E \rightarrow A^T = A^{-1} $$

### 対称行列と直交行列

1. 固有値が全て実数の行列は三角化可能
2. 実対称行列の固有値は全て実数

**性質2の証明**

まず、実対称行列Aが持つ複素数の固有値の一つを$\lambda$とします

また、この固有値の共役を$\bar\lambda$とします

$Ax = \lambda x$が成り立ちます。この式は、両辺の各要素を共役に置き換えても成立します。つまり、$\bar Ax = \bar \lambda x$も成り立ちます

Aの成分は全て実数なので、$A = \bar A$です。よって、上の式は次のように変えられます

$$ A\bar x = \bar \lambda \bar x$$

次に両辺の転置を考えます。２行列について$(AB)^T = B^TA^T$が成り立つこと、実対称行列Aは$A = A^T$である

$$ \bar x^TA = \bar \lambda \bar x^T $$

$$ \bar \lambda \bar x^Tx = \bar x^TAx = \bar x^T \lambda x = \lambda \bar x^Tx $$

$\bar x^Tx$は、互いに共役の関係にあるベクトルの内積です

$$ \bar x^Tx = \bar x_1x_1 + ... + \bar x_nx_n > 0 $$

よって、$\bar \lambda \bar x^Tx = \lambda \bar x^Tx$

$$ \lambda = \bar \lambda $$

共役の値が同じと言うことは、$\lambda$の虚数部分は０と言うことです。

### 対角化

$$ P^{-1}AP = \begin{bmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ 0 & a_{22} & \dots & a_{2n} \\ \vdots & \vdots & \ddots & \vdots \\ 0 & 0 & \cdots & a_{nn}  \end{bmatrix}　$$

$$ (P^{-1}AP)^T = (P^TA^TP^{-1}) = P^{-1}AP $$

### 直交行列の対角化は対称行列だけ

$$ P^{-1}AP = (P^{-1}AP)^T = (P^TAP)^T = (P^T)^TAP = P^{-1T}AP$$

- Aが対称行列である　$\leftrightarrow$ Aは直交行列によって対角化可能
