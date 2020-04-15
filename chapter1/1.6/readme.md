不合法. 表面上的原因是前几行最后多了分号, 我们可以做实验确定更实质的原因. 

编译以下程序: 

```c++
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
    return 0;
}
```

```
prog6.cc: In function 'int main()':
prog6.cc:9:15: error: expected primary-expression before '<<' token
               << " and " << v2;
               ^~
prog6.cc:10:15: error: expected primary-expression before '<<' token
               << " is " << v1 + v2 << std::endl;
               ^~
```

可以看到编译器的输出为`期望'<<'之前的primary-expression`, 关于`primary-expression`可以参考[MS的文档](https://docs.microsoft.com/en-us/cpp/cpp/primary-expressions?view=vs-2019). 
