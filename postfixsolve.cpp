#include    <iostream>
#include    <stack>
#include    <string>
#include    <cmath>

using namespace std;

int calculate(int x, int y, char op)
{
    int res = 0;
    switch(op)
    {
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x*y;
            break;
        case '/':
            res = x/y;
            break;
        case '^':
            res = pow(x, y);
            break;
    }
    return res;
}

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

int solverPostFix(string str)
{
    stack<int> stack;

    str += ")";

    int i = 0;
    while(i < str.length() && str.at(i) != ')')
    {
        if(str.at(i) == ',')
        {
            i++;
            continue;
        }
        if(!isOperator(str.at(i)))
        {
            int n = 0;
            // if(str.at(i+1) != ',')
            // {
                
                while(str.at(i) != ',')
                {
                    n =  n*10 + int(str.at(i) - '0');
                    i++;
                }
            // }

            if(n == 0)
            {
                stack.push(int(str.at(i) - '0'));
            }
            else stack.push(n);
        }
        else
        {
            int x, y;

            x = stack.top();
            stack.pop();

            y = stack.top();
            stack.pop();

            stack.push(calculate(y, x, str.at(i)));
        }
        i++;
    }

    return stack.top();
}


int main()
{   
    cout << solverPostFix("5,6,2,+,*,12,4,/,-") << endl;
    
    cout << solverPostFix("2,3,^,5,2,2,^,*,12,6,/,-,+");

    return 0;
}