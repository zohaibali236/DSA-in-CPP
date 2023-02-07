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

int SolverInFix(string str)
{
    stack<int> stack;


   
    for(int i = str.size()-1; i >= 0; i--)
    {
        if(str.at(i) == ',')
        {
            continue;
        }
        if(!isOperator(str.at(i)))
        {
            int n = 0, j = i;

            while(str.at(i) != ',')
            {
                i--;
            }
            i++;
            
            for(int k = i; k <= j; k++)
            {
                n = n*10 + int(str.at(k) - '0');
            }
            
            stack.push(n);
        }
        else
        {
            int x, y;

            x = stack.top();
            stack.pop();

            y = stack.top();
            stack.pop();

            stack.push(calculate(x, y, str.at(i)));
        }
    }

    return stack.top();
}


int main()
{   
    cout << SolverInFix("+,9,*,12,6") << endl;
    
    return 0;
}