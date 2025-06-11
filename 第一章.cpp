#include <iostream>

int main()
{
    const int a = 10;
    int b = a; // 顶层const忽略

    // const int *const p=new int(10);
    // int *p1 = p;
    // int *const p2=p;
    // const int *p3 = p;
    // 顶层const用于限制变量本身的修改，底层const用于限制通过指针或引用修改所指向的对象

    int *const p4 = new int(2);
    *p4 = 4;

    // 引用的实现是通过指针
    const int &c = b; // 底层const
    const int d = 0;  // 顶层const
    // 引用一旦定义必须初始化且后续不能被赋值，也就是它隐藏了一个顶层const
    // P58当执行拷贝操作时，常量的顶层const不受什么影响（及可以忽略），而底层const必须一致
}