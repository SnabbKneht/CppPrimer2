#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using std::cout;
using std::stack;
using std::string;

void process_parentheses(string &expr)
{
    stack<char> stk;
    for(auto c : expr)
    {
        if(c != ')')
        {
            stk.push(c);
        }
        else
        {
            while(stk.top() != '(')
            {
                stk.pop();
            }
            stk.pop();
            stk.push('x');
        }
    }
    expr.clear();
    while(!stk.empty())
    {
        expr.push_back(stk.top());
        stk.pop();
    }
    std::ranges::reverse(expr);
}

int main()
{
    string expr1("(1 + 2) * (3 + 4)");
    process_parentheses(expr1);
    cout << expr1 << '\n';
}
