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

---

**The Multiplication Rule**

$$ 
    P(A \cap B) = P(B)P(A|B)
$$ 

$$
    \begin{align*}
        P(A \cap B) & = P(A)P(B|A) \\
                    & = P(B)P(A|B)
    \end{align*}
$$

$$
    \begin{align*}
        P(A^c \cap B \cap C^c) & = P(A^c \cap B)P(C^c|A^c \cap B) \\
                               & = P(A^c)P(B|A^c)P(C^c|A^c \cap B)
    \end{align*}
$$

---

**Total Probability Theorem**

- Partition of sample splace into $A_1, A_2, A_3$
- Have $P(A_i)$, for every i
- Have $P(B|A_i)$, for every i

$$
    \begin{align*}
        P(B) & = P(B \cap A_1) + P(B \cap A_2) + P(B \cap A_3) + ...
             & = P(A_1)P(B|A_1) + ...
    \end{align*}
$$

> $P(B) = \sum_{i}P(A_i)P(B|A_i)$ 

---

**Bayes' Rule**
> Revise "beliefs"

$$
    P(A_i|B) = \dfrac{P(A_i)P(B|A_i)}{\sum_jP(A_j)P(B|A_j)}
$$

- Systematic approach for incorporating new evidence

- Bayesian Inference
  - initial beliefs $P(A_i)$ on possible causes of an observed event $B$
  - models of the world under each $A_i: P(B|A_i)$
    - $A_i \rightarrow P(B|A_i) \rightarrow B$
  - draw conlusions about causes
    - $B \rightarrow P(A_i|B) \rightarrow A_i$