#include <iostream>
using namespace std;


class Stack
{
    private:
        int n;
        int top;
        int *arr;

    public:
        Stack(int n)
        {
            this->n = n;
            top = -1;
            arr = (int*) malloc(((*this).n)*sizeof(int));
        }

        void push(int data)
        {
            if(top == n-1)
            {
                cout << "StackOverflow" << endl;
                return;
            }
            else
            {
                top++;
                arr[top] = data;
            }
        }

        int pop()
        {
            if(top == -1)
            {
                cout << "StackUnderflow" << endl;
                return -1;
            }

            int temp = arr[top];

            top--;

            return temp;
        }

        void traverse()
        {
            for(int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
};

int main()
{
    Stack s(5);

    s.pop();

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.traverse();

    cout << endl;

    cout << s.pop();

    cout << endl;
    cout << endl;
    s.traverse();

    return 0;
}