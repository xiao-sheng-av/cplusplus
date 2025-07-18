// 1.对Tv和Remote类做如下修改；
// a．让它们互为友元；
// b．在Remote类中添加一个状态变量成员，该成员描述遥控器是处
// 于常规模式还是互动模式；
// c．在Remote中添加一个显示模式的方法；
// d．在Tv类中添加一个对Remote中新成员进行切换的方法，该方法
// 应仅当TV处于打开状态时才能运行。
#include <iostream>
#include "test-tv.h"
int main()
{
    Tv t1;
    Remote r1;
    r1.show_control();
    t1.contro(r1);
    t1.onoff();
    t1.contro(r1);
    r1.show_control();
    return 0;
}