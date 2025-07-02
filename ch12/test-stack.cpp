#include "test-stack.h"

Stack::Stack(int n)
{
    size = n;
    top = 0;
    pitems = new Item[size];
}

Stack::Stack(const Stack &st)
{
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for (int i = 0; i < size; i++)
        *(pitems + i) = *(st.pitems + i);
}

Stack::~Stack()
{
    delete[] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item &item)
{
    if(top == size)
        return false;
    *(pitems + top++) = item;
    return true;
}

bool Stack::pop(Item &item)
{
    if(top == 0)
        return false;
    item = *(pitems + --top);
    return true;
}

Stack &Stack::operator=(const Stack &st)
{
    size = st.size;
    top = st.top;
    delete[] pitems;
    pitems = new Item[size];
    for (int i = 0; i < size; i++)
        *(pitems + i) = *(st.pitems + i);
    return *this;
}