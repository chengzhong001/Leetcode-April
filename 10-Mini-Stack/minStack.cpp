#include <stack>
#include <limits.h>


class MinStack
{
private:
    std::stack<int> data;
    std::stack<int> mins;

public:
    MinStack()
    {
        mins.push(INT_MAX);
    }

    void push(int val)
    {
        data.push(val);
        mins.push(std::min(mins.top(), val));
    }

    void pop()
    {
        data.pop();
        mins.pop();
    }

    int top()
    {
        return data.top();
    }

    int getMin()
    {  
        return mins.top();
    }
};
