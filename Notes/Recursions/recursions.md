### 漸化式

1. 等差数列型： $a_{n+1} = a_n + q$

$$
    \begin{align*}
        a_1 = 2, \quad a_{n+1} = a_n + 4
    \end{align*}
$$

$$
    \begin{align*}
        a_n = 2 + 4(n-1) = 4n - 2
    \end{align*}
$$

2. 等比数列型： $a_{n+1} = pa_n$

$$
    \begin{align*}
       a_1 = 3, \quad a_{n+1} = 5a_n
    \end{align*}
$$

$$
    \begin{align*}
        a_n = 3 \cdot 5^{n-1}
    \end{align*}
$$

3. 階差数列型： $a_{n+1} = a_n + f(n)$

$$
    \begin{align*}
        a_1 = 2, a_{n+1} = a_n + 2n
    \end{align*}
$$

$$
    \begin{align*}
       a_n & = a_1 + \sum_{k=1}^{n-1}b_k \\\
       & = 2 + \sum_{k=1}^{n-1}2k \\\
       & = 2 + 2 \cdot \dfrac{1}{2}n(n-1) \\\
       & = n^2 - n + 2
    \end{align*}
$$

4. 基本隣接２項漸化式： $a_{n+1} = pa_n + q$

$$
    \begin{align*}
        a_1 = 3, \quad a_{n+1} = 2a_n + 2
    \end{align*}
$$

$$
    \begin{align*}
        & a_{n+1} = 2(a_n+2), \quad b_n = a_n + 2 \\\
        & b_{n+1} = 2b_n, b_1 = a_1 + 2 = 5 \\\
        & b_n = 5 \cdot 2^{n-1} \\\
        & a_n = 5 \cdot 2^{n-1} - 2
    \end{align*}
$$

5. 定数項べき乗型： $a_{n+1} = pa_n + qr^n$

$$
    \begin{align*}
        a_1 = 1, \quad a_{n+1} = 2a_n + 3^n
    \end{align*}
$$

$$
    \begin{align*}
        & \dfrac{a_{n+1}}{3_{n+1}} = \dfrac{2}{3} \cdot \dfrac{a_n}{b_n} + \dfrac{1}{3}, \quad b_n = \dfrac{a_n}{3^n} \\\
        & b_{n+1} = \dfrac{2}{3}b_n + \dfrac{1}{3} \\\
        & b_{n+1} - 1 = \dfrac{2}{3}(b_n - 1)
    \end{align*}
$$

$$
    \begin{align*}
        & b_n - 1 = -\dfrac{2}{3} \cdot \dfrac{2}{3}^{n-1} \\\
        & b_n = -(\dfrac{2}{3})^n + 1 \\\
        & a_n = 3^n[-(\dfrac{2}{3})^n + 1] = 3^n - 2^n
    \end{align*}
$$

6. 定数項多項式型： $a_{n+1} = pa_n + f(n)$

$$
    \begin{align*}
        a_1 = 1, \quad a_{n+1} = 2a_n + n + 1
    \end{align*}
$$

**Solution One**

$$
    \begin{align*}
        & a_{n+1} + α(n+1) + β = 2(a_n + αn +β) \\\
        & a_{n+1} = 2a_n + αn - α + β
    \end{align*}
$$

$$
    \begin{align*}
        \begin{cases} α = 1 \\\ -α + β = 1 \end{cases}
    \end{align*}
$$

$$
    \begin{align*}
        & a_{n+1} + (n+1) + 2 = 2(a_n + n+ 2) \\\
        & a_1 + 1 + 2 = 4, \quad r = 2 \\\
        & a_n + n + 2 = 4 \cdot 2^{n-1} \\\
        & a_n = 2^{n+1} - n - 2
    \end{align*}
$$

**Solution Two**

$$
    \begin{align*}
        \begin{cases} a_{n+2} = 2a_{n+1} + n + 2 \\\ a_{n+1} = 2a_n + n + 1 \end{cases}
    \end{align*}
$$

$$
    \begin{align*}
        & a_{n+2} - a_{n+1} = 2(a_{n+1} - a_n) + 1, \quad b_n = a_{n+1} - a_n \\\
        & b_{n+1} = 2b_n + 1, b_{n+1} + 1 = 2(b_n + 1) \\\
        & b_1 + 1  = a_2 - a_1 + 1 = 4, \quad r = 2 \\\
        & b_n + 1 = 4 \cdot 2^{n-1}, b_n = 4 \cdot 2^{n-1} - 1
    \end{align*}
$$

$$
    \begin{align*}
        a_n & = a_1 + \sum_{k=1}^{n-1}b_k \\\
        & = 1 + \sum_{k=1}^{n-1}(4 \cdot 2^{k-1} - 1) \\\
        & = 1 + \dfrac{4(2^{n-1}-1)}{2-1} - (n-1) \\\
        & = 2^{n+1} - n - 2
    \end{align*}
$$

$$
    \begin{align*}
        a_n = 2^{n+1} - n - 2
    \end{align*}
$$

7. 一般項べき型： $a_{n+1} = qa_n^p$

$$
    \begin{align*} a_1 = 4, \quad \sqrt{a_{n+1}} = 2a_n^{1/3} \end{align*}
$$

$$
    \begin{align*}
        & (a_{n+1})^{1/2} = 2(a_n)^{1/3} \Longleftrightarrow a_{n+1} = 2^2(a_n)^{2/3} \\\
        & \log_2{a_{n+1}} = \log_2{2^2} + \log_{2}(a_n)^{2/3} = \dfrac{2}{3}\log_2{a_n} + 2, \quad b_n = \log_2{a_n}
    \end{align*}
$$

$$
    \begin{align*}
        b_{n+1} = \dfrac{2}{3}b_n + 2 \Longleftrightarrow b_{n+1} - 6 = \dfrac{2}{3}(b_n - 6)
    \end{align*}
$$

$$
    \begin{align*}
        & b_1 - 6 = \log_2{a_1} - 6 = -4, \quad r = \dfrac{2}{3} \\\
        & b_n = -4 \cdot (\dfrac{2}{3})^{n-1} + 6 \\\
        & a_n = 2^{-4 \cdot (\dfrac{2}{3})^{n-1} + 6}
    \end{align*}
$$