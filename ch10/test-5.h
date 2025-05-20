
struct customer{
    char fullname[35];
    double payment;
};

class Stack
{
private:
    enum {Max = 50};
    customer usr[Max];
    double total;
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool pop(const customer &u);
    bool push(customer &u);

};