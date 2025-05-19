#ifndef TEST2_H_
#define TEST2_H_
#include <string>
using namespace std;
class Person{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person() {lname = ""; fname[0] = '\0';}
    Person(const string &ln, const char *fn = "Heyyou");
    void show() const;
    void FormalShow() const;
};

#endif