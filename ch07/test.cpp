//编写一个程序，不断要求用户输入两个数，知道其中的一个为0。
//对于每两个数，程序将使用一个函数来计算他们的调和平均数，并将结果返回给main()，而后者将报告结果。
//调和平均数指的是倒数平均值的倒数，计算公式如下：
//调和平均数 = 2.0 * x * y / (x + y)
// #include <iostream>
// double fun(double, double);
// int main()
// {
//     double a = 0, b = 0;
//     while(std::cin >> a)
//     {
//         std::cin >> b;
//         if(a == 0 || b == 0)
//             break;
//         std::cout << fun(a, b) << std::endl;
//     }
//     return 0;
// }

// double fun(double x, double y)
// {
//     return 2.0 *x * y / (x + y);
// }


//编写一个程序，要求用户输入最多十个高尔夫成绩，并将其存储在一个数组中。
//程序允许用户提早结束输入，并在一行上显示所有成绩，然后报告平均成绩。
//请使用3个数组处理函数来分别进行输入、显示和计算平均成绩。
// #include <iostream>
// int get(double grade[], int size);
// void display(double grade[], int size);
// double calculation(double grade[], int size);

// int main()
// {
//     double grade[10] = {0};
//     int count = get(grade, 10);
//     display(grade, count);
//     double average = calculation(grade, count);
//     std::cout << "\n average: " << average << std::endl;
//     return 0;
// }
// int get(double grade[], int size)
// {
//     int count = 0;
//     for(int i = 0; i < size; i++)
//     {
//         std::cin >> grade[i];
//         //这里输入负数退出
//         if(grade[i] < 0) break;
//         count++;
//     }
//     return count;
// }
// void display(double grade[], int size)
// {
//     std::cout << "\n\n\n";
//     for(int i = 0; i < size; i++)
//         std::cout << grade[i] << "  " << std::endl;
// }
// double calculation(double grade[], int size)
// {
//     double sum = 0;
//     for(int i = 0; i < size; i++)
//         sum = sum + grade[i];
//     return sum / size;
// }

//下面是一个结构声明：
//struct box
//{
//  char maker[40];
//  float height;
//  float width;
//  float length;
//  float volume;
//};
//a.编写一个函数，按值传递box结构，并显示每个成员的值。
//b.编写一个函数，传递box结构的地址，并将volume成员设置为其他三位长度的乘积
//c.编写一个使用这两个函数的简单程序
// #include <iostream>
// struct box
// {
//     char maker[40];
//     float height;
//     float width;
//     float length;
//     float volume;
// };

// void display(box);
// void vl(box *);
// int main()
// {
//     box a = {"jie", 20, 20, 20, 0};
//     vl(&a);
//     display(a);
//     return 0;
// }

// void display(box a)
// {
//     std::cout << "makers: " << a.maker << "  height: " << a.height 
//               << "  width: " << a.width << " length: " << a.length 
//               << " volume: " << a.volume << std::endl;
// }
// void vl(box *a)
// {
//     a->volume = a->height * a->width * a->width;
// }

//许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩法的变体。在这些玩法中，玩家从一组被称为域号码（field number）的号码中选择几个。
//例如，可以从域号码1～47中选择5个号码；还可以从第二个区间（如1～27）选择一个号码（称为特选号码）。
//要赢得头奖，必须正确猜中所有的号码。
//中头奖的几率是选中所有域号码的几率与选中特选号码几率的乘积。
//例如，在这个例子中，中头奖的几率是从47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的几率的乘积。
//请修改程序清单7.4，以计算中得这种彩票头奖的几率。

// #include <iostream>
// long double probability(unsigned number, unsigned picks);
// int main()
// {
//     using namespace std;
//     long double field, particular;
//     field = probability(47, 5);
//     particular = probability(27, 1);
//     cout << "中奖概率： " << field * particular << endl;
//     return 0;
// }

// long double probability(unsigned numbers, unsigned picks)
// {
//     long double result = 1.0;
//     long double n;
//     unsigned p;
//     for(n = numbers, p = picks; p > 0; n--, p--)
//         result = result * n / p;
//     return result;
// }


//定义一个递归函数，接受一个整数参数，并返回该参数的阶乘。
//前面讲过，3的阶乘写作3!，等于3*2!，依此类推；而0!被定义为1。
//通用的计算公式是，如果n大于零，则n!=n*（n−1）!。
//在程序中对该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些值的阶乘。

// #include <iostream>
// long long recursion(int);

// int main()
// {
//     int n = 0;
//     long long num = 0;
//     std::cin >> n;
//     while(n > 0)
//     {
//         num = recursion(n);
//         std::cout << n << "! = " << num << std::endl;
//         std::cin >> n;
//     }
//     return 0;
// }
// long long recursion(int n)
// {
//     long long num = 1;
//     for(int i = 2; i <= n; i++)
//     {
//         num = num * i;
//     }
//     return num;
// }

//编写一个程序，它使用下列函数：
//Fill_array( )将一个double数组的名称和长度作为参数。
//它提示用户输入double值，并将这些值存储到数组中。
//当数组被填满或用户输入了非数字时，输入将停止，并返回实际输入了多少个数字。

//Show_array( )将一个double数组的名称和长度作为参数，并显示该数组的内容。

//Reverse-array( )将一个double数组的名称和长度作为参数，并将存储在数组中的值的顺序反转。
//程序将使用这些函数来填充数组，然后显示数组；反转数组，然后显示数组；
//反转数组中除第一个和最后一个元素之外的所有元素，然后显示数组。

// #include <iostream>
// int Fill_array(double [], int);
// void Show_array(double [], int);
// void Reverse_array(double [], int);

// int main()
// {
//     double array[10] = {0};
//     int num = Fill_array(array, 10);
//     Show_array(array, num);
//     Reverse_array(array, num);
//     std::cout << std::endl;
//     Show_array(array, num);
//     return 0;
// }

// int Fill_array(double array[], int size)
// {
//     int num = 0;
//     for(int i = 0; i < size; i++)
//     {
//         if(std::cin >> array[i])
//             num++;
//         else break;
//     }
//     return num;
// }

// void Show_array(double array[], int size)
// {
//     for(int i = 0; i < size; i++)
//         std::cout << array[i] << "  ";
// }

// void Reverse_array(double array[], int size)
// {
//     double temp = 0;
//     for(int i = 0; i < size/2; i++)
//     {
//         temp = array[i];
//         array[i] = array[size - i - 1];
//         array[size - i - 1] = temp;
//     }
// }


//7．修改程序清单7.7中的3个数组处理函数，使之使用两个指针参数来表示区间。
//fill_array( )函数不返回实际读取了多少个数字，而是返回一个指针，该指针指向最后被填充的位置；
//其他的函数可以将该指针作为第二个参数，以标识数据结尾。

