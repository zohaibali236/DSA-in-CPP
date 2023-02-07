/**
 * 
 * 
 * Infix to Postfix Converter
 * 
 * 
**/

#include <iostream>
#include <string>
#include <stack>

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
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

string infixToPostFix(string str)
{
    stack <char>s;

    s.push('(');

    str += ")";

    string p = "";

    int i = 0;

    while(i < str.length() && !s.empty())
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            p += str[i];
        }
       else if(str[i] == '(')
        {
            s.push(str[i]);
        }
        else if(str[i] == ')')
        {
            while(s.top() != '(')
            {
                p += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while(operatorPrecedence(str[i]) <= operatorPrecedence(s.top()))
            {
                p += s.top();
                s.pop();
            }
            s.push(str[i]);
        }
        i++;
    }
    return p;
}

int main()
{   
    string s = infixToPostFix("A+(B*C-(D/E^F)*G)*H");

    cout << s;
    return 0;
}