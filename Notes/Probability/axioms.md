### Axioms

- Event: a subset of the sample space
  - Probability is assigned to events

---

- Axioms: 
  - Non-negetivity: $P(A) \ge 0, P(A) \le 1$ 
  - Normalization: $P(\Omega) = 1, P(\empty) = 0$
  - (Finite) Additivity: $A \cap B = \empty \rightarrow$ $P(A \cup B) = P(A) + P(B)$
---

- Disjoint Events
  - $P(A) + P(A^c) = 1 = P(A \cup A^c)$
  - $P(A \cup B \cup C) = P(A) + P(B) + P(C)$
  - $P({s_1, s_2, ..., s_k}) = P({s_1}) + ... + P({s_k}) = P(s_1) + ... + P(s_k)$

---
- Consequences of the axioms
  - $A \sub B \rightarrow P(A) \le P(B)$
  - $P(A \cup B) = P(A) + P(B) - P(A \cap B)$
  - $P(A \cup B) \le P(A) + P(B)$
    - $a = P(A \cap B^c), b = P(A \cap B), c = P(B \cap A^c)$  
  - $P(A \cup B \cup C) = P(A) + P(A^c \cap B) + P(A^c \cap B^c \cap C)$