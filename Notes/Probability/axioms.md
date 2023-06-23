### Axioms

- Event: a subset of the sample space
  - Probability is assigned to events

---

- Axioms: 
  - Non-negetivity: $P(A) \ge 0, P(A) \le 1$ 
  - Normalization: $P(\Omega) = 1, P(\empty) = 0$
  - (Finite) Additivity: $A \cap B = \empty \rightarrow$ $P(A \cup B) = P(A) + P(B)$
    - Can expand to an infinite **sequence** of disjoint events

**Additivity Catch-up** 

$$
  1 = P(\Omega) = P(U\{(x, y)\}) \ne \sum P(\{(x, y)\}) = \sum 0 = 0
$$

- Additivity hold only for **countable sequences** of events
- The unit square is **not countable**
- **Area** is a legitimate probability law on the unit square as long as we do not try to assign probabilities/areas to **very stange** sets
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

---

- Intepretations of probability theory
  - Description of beliefs
  - Betting preferences

- Roles of probability theory
  - Rules for consistent reasoning
  - Predictions and decisions 

