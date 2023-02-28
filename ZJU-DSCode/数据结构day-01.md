# 数据结构day-01

​	

---

## 解决方法的效率，和空间的利用率有关

`example`

> 写程序实现一个函数PrintN，使得传入一个正整数为N的参数后，能顺序打印从1到N的全部正整数

*常规方法实现*

```c
#include<stdio.h>

void PrintN(int N) {
	int i;
	for (i = 1; i <= N; i++)
		printf("%d ", i);
}

int main()
{
	int N;
	scanf("%d", &N);
	PrintN(N);
	return 0;
}
```

*递归方法实现*

```c
#include<stdio.h>

void PrintN(int N) {
	if (N > 0) {
		PrintN(N - 1);
		printf("%d ", N);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	PrintN(N);
	return 0;
}
```

---

## 抽象数据类型`ADT`

> 以矩阵(Matrix)为例，不需要在乎数据的类型，数据运算的具体实现，用什么语言实现等等都是不需要考虑的。相当于一种思路蓝图。

---

## 算法(Algorithm)

`定义`

> - 一个有限指令集
> - 接受一些输入（可不输入）
> - 产生输出
> - 一定在有限步骤后终止
> - 每条指令必须
>   * 有充分明确的目标，不可有歧义
>   * 计算机能处理的范围之内
>   * 描述应不依赖任何一种计算机语言以及具体的实现手段
