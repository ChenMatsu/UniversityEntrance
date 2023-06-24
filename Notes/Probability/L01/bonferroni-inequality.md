### Bonferroni Inequality

Suppose that:

- **very few** of the students are smart
- **very few** students are beautiful

Then:

- **very few** students are smart **or** beautiful

---

Suppose that:

- **most** of the students are smart
- **most** students are beautiful

Then: 

- **most** students are smart **and** beautiful

$$
    P(A_1 \cap A_2) \ge P(A_1) + P(A_2) - 1
$$

$$
    \begin{align*}
        P((A_1 \cap A_2)^c) & = P(A_1^c \cup A_2^c) \le P(A_1^c) + P(A_2^c) \\
        & \rightarrow 1 - P(A_1 \cap A_2) \le 1 - P(A_1) + 1 - P(A_2) \\
        & \rightarrow P(A_1 \cap A_2) \ge P(A_1) + P(A_2) - 1
    \end{align*}
$$

$$
    P(A_1 \cap ... \cap A_n) \ge P(A_1) + ... + P(A_n) - (n - 1)
$$



