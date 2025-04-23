/**
 * 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
 * 1英尺等于12英寸。
 * 该程序使用下划线字符来指示输入位置。
 * 另外，使用一个const符号常量来表示转换因子。
 */
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int hight = 0;
//     const int converst = 12;
//     cout << "Enter hight(inch):__\b\b";
//     cin >> hight;
//     cout <<"\n hight = " << hight / converst << " feet + " << hight %  converst << " inch."<< endl;
//     return 0;
// }

/**
 * 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。
 * （使用3个变量来存储这些信息。）该程序报告其BMI（Body Mass Index，体重指数）。
 * 为了计算BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。
 * 然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。
 * 最后，计算相应的BMI—体重（千克）除以身高（米）的平方。
 * 用符号常量表示各种转换因子。
 */
// #include <iostream>
// int main()
// {
//     using namespace std;
//     float height_feet = 0;
//     float height_inch = 0;
//     float weight = 0;
//     const float converst_m = 0.0254;
//     const float converst_kg = 1 / 2.2;
//     cout << "输入你的身高，格式为英尺 英寸" << endl;
//     cin >> height_feet >> height_inch;
//     cout << "输入你的体重，单位为磅" << endl;
//     cin >> weight;
//     cout << "你的身高(m)" << (height_feet * 12 + height_inch) * converst_m <<endl;
//     cout << "你的体重(kg)" << weight * converst_kg << endl;
//     cout << "BMI = " <<  weight * converst_kg / ((height_feet * 12 + height_inch) * converst_m) / ((height_feet * 12 + height_inch) * converst_m) << endl;
//     return 0;
// }
/**
 * 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
 */
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int degree = 0;
//     int minutes = 0;
//     int seconds = 0;
//     cout << "Enter a alatitude in degrees, minutes, and seconds:" << endl;
//     cout << "First, enter the degrees: ";
//     cin >> degree;
//     cout << "\nNext, enter the minutes of arc: ";
//     cin >> minutes;
//     cout << "\nFinally, enter the seconds of arc: ";
//     cin >> seconds;
//     cout << degree << " degress, " << minutes << " minutes, " << seconds << " seconds = " << degree + minutes / 60.0 + seconds / 60.0 /60.0 << " degrees" << endl;
//     return 0;
// }
/**
 * 编写一个程序，要求用户以整数方式输入秒数（使用long或longlong变量存储），然后以天、小时、分钟和秒的方式显示这段时间。
 * 使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。
 */
// #include <iostream>
// int main()
// {
//     using namespace std;
//     long seconds = 0;
//     const long day = 60 * 60 * 24;
//     const int hour = 60 *60;
//     const int minutes = 60;
//     cout << "Enter the number of seconds: ";
//     cin >> seconds;
//     cout << seconds << " seconds = " << seconds / day << " days, " 
//          << seconds % day / hour << " hours, "
//          << seconds % hour / minutes << " minutes, " 
//          << seconds % minutes << " secpmds" << endl;
//     return 0;
// }
/**
 * 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
 * 将这些信息存储在long long变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。
 */
// #include <iostream>
// int main()
// {
//     using namespace std;
//     long long population_us = 0;
//     long long population_world = 0;
//     cout << "Enter the world's population: ";
//     cin >> population_world;
//     cout << "\nEnter the polulation of the US: ";
//     cin >> population_us;
//     cout << "The population of the US is " << population_us / (float)population_world *100 << "% of the world population." << endl;
//     return 0;
// }
/**
 * 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量
（加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，也可以让
程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后
指出欧洲风格的结果—即每100公里的耗油量（升）。
 */
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int mileage = 0;
//     int gallon = 0;
//     cout << "输入里程(英里): " << endl;
//     cin >> mileage;
//     cout << "输入汽油量(加仑): " << endl;
//     cin >> gallon;
//     cout << "汽车耗油量为一加仑的里程：" << mileage / (float)gallon << endl;
//     cout << "输入里程(公里): " << endl;
//     cin >> mileage;
//     cout << "输入汽油量(升): " << endl;
//     cin >> gallon;
//     cout << "每100公里的耗油量: " << gallon / (float)mileage * 100 << endl;
//     return 0;
// }
/**
 * 编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加仑多少英里。
 * 注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。
 * 100公里等于62.14英里，1加仑等于3.875升。
 * 因此，19mpg大约合12.4l/100km，27mpg大约合8.71/100km。
 */
// #include <iostream>
// int main()
// {
//     double fuelConsumption = 0;
//     std::cout << "输入汽车耗油量（欧洲风格）：";
//     std::cin >> fuelConsumption;
//     std::cout << "\n转为美国风格的耗油量:" << 62.14 / fuelConsumption * 3.875 << std::endl;
//     return 0;
// }
