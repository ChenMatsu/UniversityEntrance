### Conditional Probability and Bayes Rule

- Three **important** tools
  - Multiplication Rule
  - Total Probability Theorem
  - Bayes' Rule (Inference)

---

**Definition of conditional probability**

$$
    P(A|B) = \dfrac{P(A \cap B)}{P(B)} = \text{probability of A given that B occured} \\
    \text{Defined only when P(B) > 0}
$$

---

- $P(A|B) \ge 0$ assuming $P(B) > 0$ 
- $P(\Omega|B) = \dfrac{P(\Omega \cap B)}{P(B)} = \dfrac{P(B)}{P(B)} = 1$
- $P(B|B) = \dfrac{P(B \cap B)}{P(B)} = \dfrac{P(B)}{P(B)} = 1$

$$
    \begin{align*}
        A \cap C & = \empty \rightarrow P(A \cup C | B) \\ & = \dfrac{P((A \cup C) \cap B)}{P(B)} \\ & = \dfrac{P((A \cap B) \cup (C \cap B))}{P} \\ & = \dfrac{P(A \cap B) + P(C \cap B)}{P(B)}  & = P(A|B) + P(C|B)
    \end{align*}
$$

