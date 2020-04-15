编译以下程序: 

```c++
#include <iostream>

int main ( {
    std::cout << "Read each file." << std::endl:
    std::cout << Update master. << std::endl;
    std::cout << "Write new master." << std::endl;
    return 0
}
```

```
prog13.cc:3:10: error: cannot declare '::main' to be a global variable
 int main ( {
          ^
prog13.cc:4:48: error: found ':' in nested-name-specifier, expected '::'
     std::cout << "Read each file." << std::endl:
                                                ^
prog13.cc:4:44: error: 'std::endl' is not a class, namespace, or enumeration
     std::cout << "Read each file." << std::endl:
                                            ^~~~
prog13.cc:5:18: error: 'Update' was not declared in this scope
     std::cout << Update master. << std::endl;
                  ^~~~~~
prog13.cc:5:25: error: expected '}' before 'master'
     std::cout << Update master. << std::endl;
                         ^~~~~~
prog13.cc:5:25: error: expected ')' before 'master'
prog13.cc:6:10: error: 'cout' in namespace 'std' does not name a type
     std::cout << "Write new master." << std::endl;
          ^~~~
In file included from prog13.cc:1:0:
c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:61:18: note: 'std::cout' declared here
   extern ostream cout;  /// Linked to standard output
                  ^~~~
prog13.cc:7:5: error: expected unqualified-id before 'return'
     return 0
     ^~~~~~
prog13.cc:8:1: error: expected declaration before '}' token
 }
 ^
```

编译器(MinGW)的输出很有意思, 编程人员确实应该"按错误报告的顺序改正错误". 