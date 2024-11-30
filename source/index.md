---
title: ICS 2024
---

Fall, 2024

Instructor: [金城](https://cjinfdu.github.io/)

School of Computer Science, Fudan University

---


## News

- **[Nov 30, 2024]** [CacheLab](CacheLab) is released.
- **[Nov 25, 2024]** [FinalPJ](FinalPJ) is released.
- **[Oct 31, 2024]** [StackLab](StackLab) is released.
- **[Oct 9, 2024]** [BombLab](BombLab) is released.
- **[Sep 25, 2024]** [DataLab](DataLab) is released.
- **[Sep 18, 2024]** [GitLab](GitLab) is released.
- **[Sep 14, 2024]** [ICS实验入门手册](ICS实验入门手册) is released.
- **[Sep 14 2024]** Course Website is online.

## Schedule

| Num  | Date       | Subject                       | Assignment                                          |
| :--- | :--------- | :---------------------------- | :-------------------------------------------------- |
| 01   | 09/06/2024 | 数的表示 I                     |                                                     |
| 02   | 09/12/2024 | 环境配置                       |                                                     |
| 03   | 09/13/2024 | 数的表示 II                    |                                                     |
| 04   | 09/19/2024 | GitLab                       | [Lab0-GitLab](GitLab) (Due: 09/25/2024)              |
| 05   | 09/20/2024 | 机器码 I                      |                                                     |
| 06   | 09/26/2024 | DataLab发布                   | [Lab1-DataLab](DataLab) (Due: 10/10/2024)           |
| 07   | 09/27/2024 | 机器码 II                     |                                                     |
| 08   | 10/10/2024 | BombLab发布                   | [Lab2BombLab](BombLab) (Due: 10/30/2024)            |
| 09   | 10/11/2024 | 机器码 III                    |                                                     |
| 10   | 10/17/2024 | DataLab面试                   |                                                     |
| 11   | 10/18/2024 | 机器码 IV                     |                                                     |
| 12   | 10/24/2024 | BombLab答疑                   |                                                     |
| 13   | 10/25/2024 | 处理器 I                      |                                                     |
| 14   | 10/31/2024 | StackLab发布                  | [Lab3-StackLab](StackLab) (Due: 11/22/2024)         |
| 15   | 11/01/2024 | 处理器 II                     |                                                     |
| 16   | 11/07/2024 | StackLab答疑                  |                                                     |
| 17   | 11/08/2024 | 优化 I                        |                                                     |
| 18   | 11/14/2024 | BombLab讲解+面试               |                                                     |
| 19   | 11/15/2024 | 优化 II                       |                                                     |
| 20   | 11/21/2024 | StackLab答疑                  |                                                     |
| 21   | 11/22/2023 | 存储器 I                      |                                                     |
| 22   | 11/25/2024 | Final Project发布             | [Final Project](FinalPJ) (Due: 12/26/2024)          |
| 22   | 11/30/2024 | CacheLab发布                  | [CacheLab](CacheLab) (Due: 12/12/2024)          |
---

```cpp
#include <iostream>
#include <coroutine>

struct task
{
    struct promise_type
    {
        task get_return_object() { return {}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() {}
    };
};

task hello()
{
    std::cout << "Hello, ICS 2024!" << std::endl;
    co_return;
}

int main()
{
    hello();
}
```

<!-- ```cpp
#include <stdio.h>

void trans(int M, int N, int A[M][N], int B[N][M])
{
    int i, j, tmp;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }
}

static int A[256][256];
static int B[256][256];

int main()
{
    printf("try it, and wait for a year\n");
    trans(256, 256, A, B);
}
``` -->

<!--
```cpp
#include <stdio.h>

#include "generator.h"

int main() {
    auto coro = []() -> libco::generator<const char> {
        const char str[] = "Hello, ICS 2024!\n";
        for (const auto ch : str) {
            co_yield ch;
        }
    }();

    for (const auto ch : coro) {
        std::cout << ch;
    }
}
```
-->
