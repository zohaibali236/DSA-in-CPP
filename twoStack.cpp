#include <iostream>
using namespace std;

class TwoStack
{
    private:
        int top1, top2;
        int *arr;
        int len;
    
    public:
        TwoStack(int len)
        {
            this->arr = new int[len];
            this->top1 = -1;
            this->top2 = len;
            this->len = len;
        }

        void push1(int item)
        {
            if(this->top1 + 1 == this->top2)
            {
                cout << "Stack OverFlow" << endl;
                return;
            }

            this->top1++;
            this->arr[this->top1] = item;
        }

        void push2(int item)
        {
            if(this->top1 + 1 == this->top2)
            {
                cout << "Stack OverFlow" << endl;
                return;
            }

            this->top2--;
            this->arr[this->top2] = item;
        }

        void pop1()
        {
            if(this->top1 == -1)
            {
                cout << "Stack UnderFlow" << endl;
                return;
            }

            this->top1--;
        }

        void pop2()
        {
            if(this->top2 == (this->len-1))
            {
                cout << "Stack UnderFlow" << endl;
                return;
            }

            this->top2++;
        }

        void print1()
        {
            for(int i = this->top1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void print2()
        {
            for(int i = this->top2; i < this->len; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};


int main()
{
    TwoStack stack(10);

    stack.push1(1);
    stack.push1(2);
    stack.push1(3);
    stack.push1(4);
    stack.push1(5);
    
    stack.push2(6);
    stack.push2(7);
    stack.push2(8);
    stack.push2(9);
    stack.push2(10);

    stack.print1();
    stack.print2();

    return 0;
}