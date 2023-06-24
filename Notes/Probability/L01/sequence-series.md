### Sequences and Limits

**Sequence**

$$
  i \in N = \{1, 2, 3, ...\} \\
  a_i \in R^n \\
$$

$$
  f : N \rightarrow S \\
  f(i) = a_i \\
  \text{For any} \space \epsilon \space, \text{there exists} i_o, \text{such that if} \quad i \ge i_0, \text{then} \quad |a_i - a| < \epsilon
$$

If $a_i \le a_{i+1}$, for all $i$, then either:

1. the sequence "converges to ∞"
2. the sequence converges to some real number $a$

If $|a_i - a| \le b_i$, for all $i$, and $b_i \rightarrow 0$, then $a_i \rightarrow a$ (Sandwitch Theorem)

**Series**

$$
  \sum_{i=1}^∞ a_i = \lim_{n\to∞}\sum_{i=1}^n a_i
$$

If terms $a_i$ do not all have the same sign:
1. limit need not exist
2. limit may exist but be different if we sum in a different order
3. **Fact**: limist exists and independent of order of summation if $\sum_{i=1}^∞ |a_i| < ∞$

**Geomeric Series**

$$
  \sum_{i=0}^∞ \alpha^i = 1 + \alpha + \alpha^2 +... \quad (|\alpha < 1|) \\
$$

$$
  (1 - \alpha)(1 + \alpha + ... + \alpha^n) = 1 - \alpha^{n+1} \\
  n \rightarrow ∞ \\
  (1 - \alpha)S = 1 \\
  S = \dfrac{1}{1 - \alpha}
$$

$$
  S = 1 + \sum_{i=1}^∞ \alpha^i = 1 + \alpha\sum_{i=1}^∞ = 1 + \alpha S\\
  S = \dfrac{1}{1 - \alpha}
$$

**Multiple Indices**

$$
  \sum_{i=1}^∞(\sum_{j=1}^∞ a_{ij}) =  \sum_{j=1}^∞(\sum_{i=1}^∞ a_{ij})
$$