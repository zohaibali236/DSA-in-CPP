#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
    string s = "data structure";

    stack<char> s1;

    for(int i = 0; i < s.length(); i++)
    {
        s1.push(s.at(i));
    }

    stack<char> s2;

    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    string ss = "";

    while(!s2.empty())
    {
        ss.push_back(s2.top());
        s2.pop();        
    }

    // cout << ss;

    return 0;
}