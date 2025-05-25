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

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "test-01.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream file;
    file.open("vector.txt");
    if(!file)  return -1;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while(cin >> target)
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep))
            break;
        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            file << steps << ": " << result << endl;
        }
        file << "After " << steps << " steps, the subject "
                "has the following location:\n";
        file << result << "\nor\n" ;
        result.polar_mode();
        file << result << endl << "Average outward distance per step = " << result.average_distance(steps) << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}

