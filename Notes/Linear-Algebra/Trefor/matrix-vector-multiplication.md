### Matrix Vector Multiplication

$$
    A\vec{x} = \vec{b}
$$

$$
    \begin{align*}
        \vec{b} = x_1\vec{a_1} + ... + x_n\vec{a_n} & = x_1\begin{pmatrix} a_{11} \\\ \vdots \\\ a_{m_1} \end{pmatrix} + ... + x_n\begin{pmatrix} a_{1n} \\\ \vdots \\\ a_{m_n} \end{pmatrix} \\\
        & = \begin{pmatrix} x_1a_{11} + ... + x_na_{1n} \\\ \vdots \\\ ax_na_{1n} + ... + x_na_{mn} \end{pmatrix} \\\
        & =: \begin{pmatrix} a_{11} & ... & a_{1n} \\\ \vdots & \cdots & \vdots \\\ a_{1n} & ... & a_{mn} \end{pmatrix} \begin{pmatrix} x_1 \\\ \vdots \\\ x_n \end{pmatrix} \\\
        & = A\vec{x} \in \R^m
    \end{align*}
$$
