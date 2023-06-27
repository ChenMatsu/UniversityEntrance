### PID制御
> 誤差に対してPゲイン・Iゲイン・Dゲイン

<p align="center">
    <img src="https://controlabo.com/wp-content/uploads/2022/11/pid_block_blue.png"/>
</p>

$$
    u(t) = K_p\{r(t)-y(t)\} + K_I\int_0^t\{r(\tau)-y(\tau)\}d\tau + K_D\{\dot r(t) - \dot y(t)\}
$$

<p align="center">
    <img src="https://controlabo.com/wp-content/uploads/2022/07/PID_block_t.png"/>
</p>

- Pの項は誤差に比例して力を決定するので、ちょうど目標地点とブロックをバネで繋いだような作用をすることになります。（振動的な挙動）
- Dの項は速度誤差に応じて力を決定するので、ちょうど目標地点とブロックをダンパで繋いだような作用をすることになります。(振動的な挙動を抑制)
- Iの項は外乱に抗い、出力を目標値に保持する

