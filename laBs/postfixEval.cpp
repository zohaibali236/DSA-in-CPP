#include <bits/stdc++.h>
using namespace std;


bool isNumeric(char c)
{
    switch(c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return false;
        
        default:
            return true;
    }
}

int solvePostFix(string str)
{
    stack<int> s;

    str += ")";

    int i = 0;
    while(str.at(i) != ')')
    {
        if(str.at(i) == ',')
        {
            i++;
            continue;
        }

        if(isNumeric(str.at(i)))
        {
            int n = 0;
            while(str.at(i) != ',')
            {
                n = n*10 + int(str.at(i) - '0');
                i++;
            }
            cout <<n<< endl;
            s.push(n);
        }
        else
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();


            if(str.at(i) == '+')
            {
                s.push(y+x);
            }
            else if(str.at(i) == '-')
            {
                s.push(y-x);
            }
            else if(str.at(i) == '*')
            {
                s.push(y*x);
            }
            else if(str.at(i) == '/')
            {
                s.push(y/x);
            }
            else if(str.at(i) == '^')
            {
                s.push(pow(y,x));
            }
        }
        i++;
    }
    
    return s.top();
}


int main()
{

    cout <<endl << solvePostFix("2,3,^,5,2,2,^,*,12,6,/,-,+");

    return 0;
}