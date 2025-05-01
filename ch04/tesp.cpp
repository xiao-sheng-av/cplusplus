// 1.编写一个c++程序，如下述输出示例所示的那样请求并显示信息：
// what is your first name? Betty Sue
// What is your lsat name? Yewe
// What letter grade do you deserve? B
// What is your age? 22
// Name: Yewe, Betty Sue
// Grade: C
// Age: 22
// 注意，该程序应该接收的名字包含多个单词。另外，程序将乡下调整成绩，即向上调一个字母。
// 假设用户请求A、B或C，所以不必担心D和F之间的空挡。
//  #include <iostream>
//  #include <string>
//  int main()
//  {
//      using namespace std;
//      char p[2][21];
//      cout << "What is your first name? ";
//      cin.getline(p[0], 20);
//      cout << "\nWhat is your last name? ";
//      cin.getline(p[1], 20);

//     char grade;
//     cout << "\nWhat letter grade do you deserve? ";
//     cin >> grade;

//     int age = 0;
//     cout << "\nWhat is your age? ";
//     cin >> age;

//     cout << "Name: " << p[1] << ", " << p[0] << endl;
//     cout << "Grade: " << char(grade + 1)<< endl;
//     cout << "Age: " << age << endl;

//     return 0;
// }

// 2．修改程序清单4.4，使用C++ string类而不是char数组。
//  #include <iostream>
//  #include <string>
//  int main()
//  {
//      using namespace std;
//      const int ArSize = 20;
//      string name;
//      string dessert;
//      cout << "Enter your name:\n";
//      getline(cin, name);
//      cout << "Enter your favorite dessert:\n";
//      getline(cin, dessert);
//      cout << "I have some delicious " << dessert;
//      cout << " for you, " << name << ".\n";
//      return 0;
//  }

// 编写一个程序，它要求用户首先输入其名，然后输入其姓；
// 然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
// 请使用char数组和头文件cstring中的函数。下面是该程序运行时的情形：
// Enter your first name:Flip
// Enter your last name:Fleming
// Here's the information in a single string: Fleming, Flip
//  #include <iostream>
//  #include <cstring>
//  int main()
//  {
//      using namespace std;
//      char first[20];
//      cout << "Enter your first name: ";
//      cin >> first;
//      char last[20];
//      cout << "\nEnter your last name: ";
//      cin >> last;
//      char mid[3] = ", ";
//      char *name = strcat(last, mid);
//      name = strcat(name, first);
//      cout << "\nHere's the information in a single string: " << name << endl;
//      return 0;
//  }

// 编写一个程序，它要求用户首先输入其名，再输入其姓;
// 然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
// 请使用string对象和头文件string中的函数。下面是该程序运行时的情形：
// Enter your first name: Flip
// Enter your last name: Fleming
// Here's the information in a single string: Fleming, Flip
//  #include <iostream>
//  #include <string>
//  int main()
//  {
//      using namespace std;
//      string first;
//      string last;
//      string mid = ", ";
//      cout << "Enter your first name: ";
//      cin >> first;
//      cout << "Enter your last name: ";
//      cin >> last;
//      last = last + mid + first;
//      cout << "Here's the information in a single string: " << last << endl;
//      return 0;
//  }

// 结构CandyBar包含3个成员。第一个成员存储了糖块的品牌；
// 第二个成员存储糖块的重量（可以有小数）；
// 第三个成员存储了糖块的卡路里含量（整数）。
// 请编写一个程序，声明这个结构，创建一个名为snack的CandyBar变量，并将其成员分别初始化为“Mocha Munch”、2.3和350。
// 初始化应在声明snack时进行。最后，程序显示snack变量的内容。
//  #include <iostream>
//  #include <string>
//  using namespace std;
//  struct CandyBar
//  {
//      string name;
//      float weight;
//      int calorie;
//  };
//  int main()
//  {
//      CandyBar snack = {"Mocha Munch", 2.3, 350};
//      cout << "name: "<< snack.name << "\nweight: " << snack.weight << "\ncalorie: " << snack.calorie << endl;
//      return 0;
//  }

// 结构CandyBar包含3个成员，如编程练习5所示。
// 请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择的值，然后显示每个结构的内容。
//  #include <iostream>
//  #include <string>
//  using namespace std;
//  struct CandyBar
//  {
//      string name;
//      float weight;
//      int calorie;
//  };
//  int main()
//  {
//      CandyBar arry[3] = {
//          {"Mocha Munch", 2.3, 350},
//          {"Mocha", 3.2, 250},
//          {"Munch", 3.8, 300}
//      };
//      cout << "arry[0]: " << "name: " <<arry[0].name << " weight: " << arry[0].weight << " calorie: " << arry[0].calorie << endl;
//      cout << "arry[1]: " << "name: " <<arry[1].name << " weight: " << arry[1].weight << " calorie: " << arry[1].calorie << endl;
//      cout << "arry[2]: " << "name: " <<arry[2].name << " weight: " << arry[2].weight << " calorie: " << arry[2].calorie << endl;
//      return 0;
//  }

// William Wingate从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
// 披萨饼公司的名称，可以有多个单词组成。
// 披萨饼的直径。
// 披萨饼的重量。
// 请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。
// 请使用cin（或它的方法）和cout。
//  #include <iostream>
//  struct Pizza
//  {
//      char name[50];
//      float dia;
//      float weight;
//  };
//  int main()
//  {
//      using namespace std;
//      Pizza usr;
//      cout << "Enter pizza name: ";
//      cin.getline(usr.name, 50);
//      cout << "\nEnter pizza dia: ";
//      cin >> usr.dia;
//      cout << "\nEnter pizza weight: ";
//      cin >> usr.weight;

//     cout << "pizza name: " << usr.name << " pizza dia: " << usr.dia << " pizza weight: " << usr.weight << endl;
//     return 0;
// }

// 完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。
// 另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。
//  #include <iostream>
//  struct Pizza
//  {
//      char name[50];
//      float dia;
//      float weight;
//  };
//  int main()
//  {
//      using namespace std;
//      Pizza *usr = new Pizza;

//     cout << "\nEnter pizza dia: ";
//     cin >> usr->dia;
//     cout << "Enter pizza name: ";
//     cin.get();
//     cin.getline(usr->name, 50);
//     cout << "\nEnter pizza weight: ";
//     cin >> usr->weight;

//     cout << "pizza name: " << usr->name << " pizza dia: " << usr->dia << " pizza weight: " << usr->weight << endl;
//     return 0;
// }

// 完成编程练习6，但使用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组
// #include <iostream>
// #include <string>
// using namespace std;
// struct CandyBar
// {
//     string name;
//     float weight;
//     int calorie;
// };
// int main()
// {
//     CandyBar *arry = new CandyBar[3];
//     arry[0] = {"Mocha Munch", 2.3, 350};
//     arry[1] = {"Mocha", 3.2, 250};
//     arry[2] = {"Munch", 3.8, 300};
//     cout << "arry[0]: " << "name: " << arry[0].name << " weight: " << arry[0].weight << " calorie: " << arry[0].calorie << endl;
//     cout << "arry[1]: " << "name: " << arry[1].name << " weight: " << arry[1].weight << " calorie: " << arry[1].calorie << endl;
//     cout << "arry[2]: " << "name: " << arry[2].name << " weight: " << arry[2].weight << " calorie: " << arry[2].calorie << endl;
//     delete [] arry;
//     return 0;
// }

//编写一个程序，让用户输入三次40码跑的成绩并显示次数和平均成绩。
//请使用一个array对象来存储数据。
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array<float, 3> run;
//     run[0] = 10.2;
//     run[1] = 10.1;
//     run[2] = 9.9;
//     cout << "time average: " << (run[0] + run[1] + run[2]) / 3 << endl;
//     return 0;
// }