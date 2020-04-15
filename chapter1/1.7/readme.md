编译以下程序: 

```c++
#include <iostream>
/*
 * comment pairs /* */ cannot nest.
 * "cannot nest" is considered source code,
 * as is the rest of the program
 */
int main()
{
    return 0;
}
```

```
prog7.cc:3:24: error: 'cannot' does not name a type
  * comment pairs /* */ cannot nest.
                        ^~~~~~
```

可以看到编译器的输出为`'cannot'不指定类型`, 正如程序中所写, 从"cannot"开始都会被当作源代码. 
