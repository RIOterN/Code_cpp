# Diesel air path control

## 2 introduction

- control-oriented diesel engine air path model.(TOYOTA3.0KD系列，4缸)
- 依旧存在的issues
  - exhaust manifold pressure leads to a large error(to be further investigated)
  - when turbine speed occurs a large step change,the system becomes numerically unstable.
  - 可使用可变步长求解器提高精度

## 3 measurement dataset

- 稳态数据集合
  - 800-4400转 5-70注油量 43-95%VGT 0-92%EGR 0-75%EGR
  - 测试数据是60秒均值数据记录，间隔3-8min记录

- 瞬态数据集合
  - 不同转速下控制单一变量变化（油、VGT、EGR阀、EGR节气门）
  - 10hz、4阶butterworth filter过滤噪声

## 4 system level model

- 系统示意图
  - 
- 界面
- 模型集成
- 模型验证
