编译以下几个程序: 

```c++
#include <iostream>

int main()
{
    std::cout << "/*";
    return 0;
}
```

```c++
#include <iostream>

int main()
{
    std::cout << "*/";
    return 0;
}
```

```c++
#include <iostream>

int main()
{
    std::cout << /* "*/" */;
    return 0;
}
```

可以发现前两个语句是合法的, 第三个语句是不合法的. 