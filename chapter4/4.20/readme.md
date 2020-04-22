(a) 合法, 定义了一个int型对象i, 并用int型字面值-1对其进行初始化.  
(b) 合法, 定义了一个int型const对象ic, 并用int型对象对其进行初始化.  
(c) 合法, 定义了一个指向int型const对象的指针pic, 并用ic的地址对并用ic的地址对其进行初始化.  
(d) 不合法, cpi是一个指向int型对象的const指针, 不能用const int型对象ic的地址对其进行初始化.  
(e) 合法, 定义了一个指向int型const对象的const指针cpic, 并用ic的地址对其进行初始化.