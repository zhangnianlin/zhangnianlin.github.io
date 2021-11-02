# Mathematics for Computer Science

## Proof

### state machine

不变性.

application one:

一个桶能装 3 斤水. 一个桶能装 5 斤水. 如何得出 4 斤水?
only have 5 & 3. + -
P 第一个是5, 第二个是3
P(0,0) -> P(5,0) -> P(2, 3) -> P(0, 2) -> P(5, 2) -> P(4, 3)
第一个桶得到4斤水.

application two:

机器人在坐标系当中, 只能按照对角线移动, (0,0) 能够 移动到 (1,0) 吗? 


application three:
如何用寄存器 x,y,z,r 来快速计算 a^b.
