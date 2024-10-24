#ifndef MYSTACK_H
#define MYSTACK_H
#include <vector>

template <typename T>

class MyStack 
{
private:
std::vector <T> Stack;

public:
void push(T &n) {
    Stack.push_back(n);
};

void pop(){
    Stack.pop_back();
};

};


#endif // MYSTACK_H