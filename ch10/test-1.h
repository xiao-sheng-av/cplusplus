//5．定义一个类来表示银行帐户。数据成员包括储户姓名、账号
//（使用字符串）和存款。成员函数执行如下操作：
//创建一个对象并将其初始化；
//显示储户姓名、账号和存款；
//存入参数指定的存款；
//取出参数指定的款项。

#ifndef BANK_H_
#define BANK_H_
class Bank
{
private:
    char name[50];
    char account[50];
    double deposit;
public:
    Bank();
    Bank(const char n[50],const char c[50], double num);
    ~Bank();
    void show() const;
    void put(const double num);
    void get(const double num);
};

#endif