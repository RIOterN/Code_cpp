[TOC]
## 构建李亚普洛夫控制器设计
> 目的：将空燃比和EGR率调整到特定的点
> 难点：两个执行器相互作用和系统非线性
> 方法：采用李亚普洛夫函数，基于降阶的发动机模型的输入输出线性化
> 该方法优点：鲁棒性好，等效的增益和相角裕度
> 验证:在全阶模型上仿真，在测力机上实验
***
### 1介绍
- 本文提出了一种对于非线性多变量涡轮增压柴油机模型的控制器及lyapunov的实际应用。
- 发动机的性能要求：峰值功率瞬间响应燃油经济性排放，通常是矛盾的
- 柴油机的燃油经济性比汽油机高，但是后处理非常低效。减少NOx最有效的方式是EGR。惰性（inert）气体的存在减少峰值温度和抑制NOx的形成。EGR率高了降低发动机负载能力。
- 涡轮增压增加进气压力来提高功率密度。难点在于平衡：低速下的瞬态响应和高速下超速的问题-----VGT
- 鲁棒控制器需要不占用太多的电子计算单元、易于应用和校验（>1/2的增益和正负60的相角裕度）
- CLF（控制李亚普洛夫函数）由简化的线性模型构造，线性化提供了稳定控制，但可能增加复杂性和敏感性。而domination redesign保证鲁棒性，是低灵敏性指标。
- partII **review** 发动机模型=七阶模型+两个执行器动力学 。PartIII **review** domination redesign method实现系统的鲁棒性。Part IV 提出简化的三阶模型，**控制器设计**：①最小相位输出②输入输出线性化③构建CLF④domination redesign。Part V 展示如何在全阶模型进行非线性控制器的仿真和实验。
***
### 2 涡轮增压柴油机建模
- 模型中不含冷却器、理想气体、忽略向环境传热。
- 进气氧分数F_1显著影响NOx
- 这个模型还不能用于控制器的设计
***
### 3 鲁棒非线性控制
- 发动机间的变化、老化，涡轮增压的不确定、执行器动力学未建模、环境的变化等带来不确定性----->解决办法
  1. 输入未建模动力学鲁棒性
     - 传统频域设计的方法成功来源于给设计者控制增益和相角裕度（鲁棒性）
     - LQR线性二次规划,鲁棒性强($增益>\frac{1}{2}\ 相角\pm60°$)
  
  2. 逆最优控制设计
  
  
  3. 稳态控制和CLF
  

***
### 4 控制器设计

- j
  -1. 设置控制设计问题
  
  2. 构建CLF
  
  3. Domination Redesign控制律

***
### 5 仿真和实验结果
- dfjk

***
### 6 结论
