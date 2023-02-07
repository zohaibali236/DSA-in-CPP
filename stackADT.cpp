#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string input;

    getline(cin, input);

    cout << input << endl;

    stack<char> s1;
    for(int i = 0; i < input.size(); i++)
    {
        s1.push(input.at(i));
    }

    stack<char> s2;

    for(int i = 0; i < input.size(); i++)
    {
        s2.push(s1.top());
        s1.pop();
    }

    string s;

    for(int i = 0; i < input.size(); i++)
    {
        s.push_back(s2.top());
        s2.pop();
    }

    cout << s << endl;

}