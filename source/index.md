---
title: ICS 2024
---

Fall, 2024

Instructor: [金城](https://cjinfdu.github.io/)

School of Computer Science, Fudan University

---


## News

<!-- - **[Sep 19, 2024]** [Gitlab](Gitlab) is released. -->
- **[Sep 14, 2024]** [ICS实验入门手册](ICS实验入门手册) is released.
- **[Sep 14 2024]** Course Website is online.

## Schedule

| Num  | Date       | Subject                       | Assignment                                          |
| :--- | :--------- | :---------------------------- | :-------------------------------------------------- |
| 01   | 09/06/2024 | 数的表示 I                     |                                                     |
| 02   | 09/12/2024 | 环境配置                       |                                                     |
| 03   | 09/13/2024 | 数的表示 II                    |                                                     |
---
```cpp
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
```

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
