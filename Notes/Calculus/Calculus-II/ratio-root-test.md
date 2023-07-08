### Ratio Test

> 1. $\lim_{n\to ∞}|\dfrac{a_{n+1}}{a_n}| = L < 1 \to \sum_{n=1}^∞a_n$ is absolutely convergent
> 
> 2. $\lim_{n\to ∞}|\dfrac{a_{n+1}}{a_n}| = L > 1 \to \sum_{n=1}^∞a_n$ is divergent
> 
> 3. $\lim_{n\to ∞}|\dfrac{a_{n+1}}{a_n}| = L = 1 \to$ Inconclusive 

**Example1**

$$
    \lim_{n\to ∞}\dfrac{2^n}{n!}
$$

$$
    \lim_{n\to ∞}|\dfrac{a_{n+1}}{a_n}| =   \lim_{n\to ∞}|\dfrac{2^{n+1}}{2^n}\dfrac{n!}{(n+1)!}| =  \lim_{n\to ∞}\dfrac{2}{n+1} = 0 < 1 \to \text{Convergent}
$$

**Example2**

$$
    \sum_{n=1}^∞\dfrac{1}{n} 
$$

$$
    \lim_{n\to ∞}|\dfrac{n}{n+1}| = 1
$$

**Example3**

$$
    \sum_{n=1}^∞\dfrac{1}{n^2} 
$$

$$
    \lim_{n\to ∞}|\dfrac{n^2}{(n+1)^2}| = 1
$$

### Root Test

> 1. $\lim_{n\to ∞}a_n^{1/n} = L < 1 \to$ is absolutely convergent
> 2. $\lim_{n\to ∞}a_n^{1/n} = L > 1 \to$ is divergent
> 3. $\lim_{n\to ∞}a_n^{1/n} = L = 1 \to$ Inconslusive

**Example4**

$$
    \sum_{n=1}^∞(\dfrac{n+1}{2n-1})^n
$$

$$
    \lim_{n\to ∞}(\dfrac{n+1}{2n-1})^{n/n} =  \lim_{n\to ∞}\dfrac{n+1}{2n-1} = \dfrac{1}{2} < 1 \to \text{converges}
$$

