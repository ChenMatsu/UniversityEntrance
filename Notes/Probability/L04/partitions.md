### Partitions

- $n \ge 1$ distinct items; $r \ge 1$ persons give $n_i$ items to person $i$
  - $n_1, ..., n_r$ are given non-negative integers
  - $n_1 + ... + n_r = n$ 

$$
    \text{number of partitions} = \dfrac{n!}{n_1!n_2!...n_r!}
$$

---

**Example**: 52-card deck, dealt (fairly) to four players. Find P(each play gets an ace)

$$
    P(A) = \dfrac{4*3*2*\dfrac{48!}{12!12!12!12!}}{\dfrac{52!}{13!13!13!13!}}
$$

$$
    P(A) = \dfrac{52}{52} * \dfrac{39}{51} * \dfrac{26}{50} * \dfrac{13}{49}
$$