### Inclusion-Exclusion 

$$
    \begin{align*}
        P(A_1 \cup A_2) & = P(A_1) + P(A_2) - P(A_1 \cap A_2) \\
        P(A_1 \cup A_2 \cup A_3)  & = P(A_1) + P(A_2) + P(A_3) - (P(A_1 \cap A_2) + P(A_1 \cap A_3) + P(A_2 \cap A_3)) + P(A_1 \cap A_2 \cap A_3) \\ & = E[1 - (1-X_1)(1-X_2)(1-X_3)]
    \end{align*}
$$

$$
    P(\cap_{k=1}^nA_k) = \sum_iP(A_i) - \sum_{i_1 < i_2}P(A_{i1} \cap A_{i2}) + \sum_{i_1<i_2<i_3}P(A_{i1} \cap A_{i2} \cap A_{i3}) - ... + (-1)^{n-1}P(\cap_{k=1}^n A_k)
$$