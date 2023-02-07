#include <iostream>
using namespace std;

class Stack
{
    private:
        int top;
        int len;
        int *arr;

    public:
        Stack(int n)
        {
            arr = (int*) malloc(n*sizeof(int));
            top = -1;
            len = n; 
        }
        void push(int item)
        {
            if(top == len-1)
            {
                cout << "Stack Overflow" << endl;
            }
            top++;
            arr[top] = item;
        }
        int pop()
        {
            int item = arr[top];
            if(top == -1)
            {
                cout << "Stack Underflow" << endl;
                return -1;
            }

            top--;

            return item;
        }
};

int main()
{
    Stack s(3);

    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(3);

    return 0;
}