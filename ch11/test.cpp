// 修改程序清单11.15，使之将一系列连续的随机漫步者位置写入
// 到文件中。对于每个位置，用步号进行标示。另外，让该程序将初始条
// 件（目标距离和步长）以及结果小结写入到该文件中。该文件的内容与
// 下面类似：
// Target Distance: 100, Step Size: 20
// 0: (x, y) = (0, 0)
// 1: (x, y) = (-11.4715, 16.383)
// 2: (x, y) = (-8.68807, -3.42232)
// ...
// 26: (x, y) = (42.2919, -78.2594)
// 27: (x, y) = (58.6749, -89.7309)
// After 27 steps, the subject has the following location:
// (x, y) = (58.6749, -89.7309)
// or
// (m, a) = (107.212, -56.8194)
// Average outward distance per step = 3.97081

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <fstream>
// #include "test-01.h"
// int main()
// {
//     using namespace std;
//     using VECTOR::Vector;
//     ofstream file;
//     file.open("vector.txt");
//     if(!file)  return -1;
//     srand(time(0));
//     double direction;
//     Vector step;
//     Vector result(0.0, 0.0);
//     unsigned long steps = 0;
//     double target;
//     double dstep;
//     cout << "Enter target distance (q to quit): ";
//     while(cin >> target)
//     {
//         cout << "Enter step length: ";
//         if(!(cin >> dstep))
//             break;
//         while(result.magval() < target)
//         {
//             direction = rand() % 360;
//             step.reset(dstep, direction, Vector::POL);
//             result = result + step;
//             steps++;
//             file << steps << ": " << result << endl;
//         }
//         file << "After " << steps << " steps, the subject "
//                 "has the following location:\n";
//         file << result << "\nor\n" ;
//         result.polar_mode();
//         file << result << endl << "Average outward distance per step = " << result.average_distance(steps) << endl;
//         steps = 0;
//         result.reset(0.0, 0.0);
//         cout << "Enter target distance (q to quit): ";
//     }
//     cout << "Bye!\n";
//     cin.clear();
//     while(cin.get() != '\n')
//         continue;
//     return 0;
// }

// 对Vector类的头文件（程序清单11.13）和实现文件（程序清单11.14）进行修改，使其不再存储矢量的长度和角度，而是在magval( )和angval( )被调用时计算它们。
// 应保留公有接口不变（公有方法及其参数不变），但对私有部分（包括一些私有方法）和方法实现进行修改。
// 然后，使用程序清单11.15对修改后的版本进行测试，结果应该与以前相同，因为Vector类的公有接口与原来相同。
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "test-02.h"
// int main()
// {
//     using namespace std;
//     using VECTOR::Vector;
//     srand(time(0));
//     double direction;
//     Vector step;
//     Vector result(0.0, 0.0);
//     unsigned long steps = 0;
//     double target;
//     double dstep;
//     cout << "Enter target distance (q to quit): ";
//     while(cin >> target)
//     {
//         cout << "Enter step length: ";
//         if(!(cin >> dstep))
//             break;
//         while(result.magval() < target)
//         {
//             direction = rand() % 360;
//             step.reset(dstep, direction, Vector::POL);
//             result = result + step;
//             steps++;
//         }
//         cout << "After " << steps << " steps, the subject "
//                 "has the following location:\n";
//         steps = 0;
//         result.reset(0.0, 0.0);
//         cout << "Enter target distance (q to quit): ";
//     }
//     cout << "Bye!\n";
//     cin.clear();
//     while(cin.get() != '\n')
//         continue;
//     return 0;
// }

// 修改程序清单11.15，使之报告N次测试中的最高、最低和平均步数（其中N是用户输入的整数），而不是报告每次测试的结果。
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "11.13-vect.h"
// int main()
// {
//     using namespace std;
//     using VECTOR::Vector;
//     srand(time(0));
//     double direction;
//     Vector step;
//     Vector result(0.0, 0.0);
//     unsigned long steps = 0;
//     double target;
//     double dstep;
//     int n, min = 0, max = 0, sum = 0;
//     string c;
//     cout << "请输入循环次数：";
//     while (!(cin >> n))
//     {
//         cin.clear();
//         getline(cin, c);
//         cout << "请输入一个整数：";
//     }
//     cout << "请输入目标值：";
//     while (!(cin >> target))
//     {
//         cin.clear();
//         getline(cin, c);
//         cout << "请输入一个整数：";
//     }
//     cout << "请输入步长: ";
//     while (!(cin >> dstep))
//     {
//         cin.clear();
//         getline(cin, c);
//         cout << "请输入一个整数：";
//     }
//     for (int i = 0; i < n; i++)
//     {

//         while (result.magval() < target)
//         {
//             direction = rand() % 360;
//             step.reset(dstep, direction, Vector::POL);
//             result = result + step;
//             steps++;
//         }
//         if(i == 0) min = steps;
//         sum += steps;
//         if(steps > max) max = steps;
//         else if(steps < min) min = steps;
//         cout << "steps = " << steps << endl;
//         steps = 0;
//         result.reset(0.0, 0.0);
//     }
//     cout << "Max = " << max << "  Min = " << min << "  average = " << sum / n << endl;
//     cout << "Bye!\n";
//     cin.clear();
//     while (cin.get() != '\n')
//         continue;
//     return 0;
// }

// 重新编写最后的Time类示例（程序清单11.10、程序清单11.11和程序清单11.12），使用友元函数来实现所有的重载运算符。
#include <iostream>
#include "test-04.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    
    return 0;
}