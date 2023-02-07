#include <iostream>
using namespace std;


class TwoStack
{
    private:
        int n;
        int top1;
        int top2;
        int *arr;

    public:
        TwoStack(int i)
        {
            n = i;
            top1 = -1;
            top2 = -1;

            arr = new int[n];
        }

        void push1(int d)
        {
            if(top1 + 1 == top2)
            {
                cout << "StackOverflow" << endl;
                return;
            }
            top1++;
            arr[top1] = d;
        }

        void push2(int d)
        {
            if(top1 + 1 == top2)
            {
                cout << "StackOverflow" << endl;
                return;
            }
            else if(top2 == -1)
            {
                top2 = n-1;
            }
            else top2--;

            arr[top2] = d;
        }
};



int main()
{
    TwoStack s(4);

    s.push1(1);
    s.push1(2);
    s.push1(2);
    

    s.push2(1);
    s.push2(2);
    s.push2(2);
}