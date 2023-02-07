#include <bits/stdc++.h>
using namespace std;


bool isOperator(char c)
{
    switch(c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return true;
        default:
            return false;
    }
}

int operatorPrecedence(char c)
{
    switch(c)
    {
        case '+':
        case '-':
            return 1;
        case '/':
        case '*':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

string inFixToPostFix(string str)
{
    str += ")";
    string p = "";

    stack<char> s;

    s.push('(');
    int i = 0;

    while(!s.empty())
    {
        if(str.at(i) >= 'A' && str.at(i) <= 'Z')
        {
            p.push_back(str.at(i));
        }
        else if(str.at(i) == '(')
        {
            s.push(str.at(i));
        }
        else if(isOperator(str.at(i)))
        {
            while(operatorPrecedence(str.at(i)) <= operatorPrecedence(s.top()))
            {
                p.push_back(s.top());
                s.pop();
            }
            s.push(str.at(i));
        }
        else if(str.at(i) == ')')
        {
            while(s.top() != '(')
            {
                // cout << p << endl;
                p += s.top();
                s.pop();
            }
            s.pop();
        }
        i++;
    }
    return p;
}

int main()
{
    cout << inFixToPostFix("A+(B*C-(D/E^F)*G)*H");
    cout << endl;
    // cout << inFixToPostFix("(A+B)+(C+D)");
    return 0;
}