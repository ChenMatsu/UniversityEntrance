### Buffon's needle

**$l \le d$**

<p align="center">
    <img src="https://mathlandscape.com/wp-content/uploads/2023/01/buffon-pf1-768x348.png"/>
</p>

$$
  \dfrac{1}{\pi}\int_0^{\pi}\dfrac{l}{d}sin\theta d\theta = \dfrac{1}{\pi}[-\dfrac{l}{d}cos\theta]_0^{\pi} = \dfrac{2l}{d\pi}
$$

**$l > d$**

<p align="center">
    <img src="https://mathlandscape.com/wp-content/uploads/2023/01/buffon-pf2-768x408.png"/>
</p>

$$
  2\{\int_0^{\theta_0}\dfrac{l}{d}sin\theta d\theta + (\dfrac{\pi}{2} - \theta_0)\} = \dfrac{2l}{d}(1 - cos\theta_0) + \pi - 2\theta_0
$$

$$
  cos\theta_0 = \sqrt{1 - sin^2\theta_0} = \sqrt{1 - \dfrac{d^2}{l^2}}
$$

$$
  1 - \dfrac{2l}{\pi d}(\dfrac{d}{l}sin^{-1}\dfrac{d}{l} + \sqrt{1 - \dfrac{d^2}{l^2}} - 1)
$$