#include <iostream>
using namespace std;


class Queue
{
    private:
        int 
            front,
            rear,
            n,
            *arr
        ;

    public:
        Queue(int n)
        {
            front = -1; 
            rear = -1;
            this->n = n;
            arr = (int*) malloc(this->n*sizeof(int));
        }
        void enqueue(int item)
        {
            if((front == 0 && rear == n-1) || (front == rear + 1))
            {
                cout << "Overflow" << endl;
                return;
            }
            
            if(front == -1)
            {
                front = 0;
                rear = 0;
            }
            else if(rear = n-1)
            {
                rear = 0;
            }
            else 
            {
                rear++;
            }

            arr[rear] = item;
        }

        int dequeue()
        {
            if(front == -1)
            {
                cout << "underflow" << endl;
                return -1;
            }
            
            int item = arr[front];
            if(front == rear)
            {
                front = rear =  -1;
            }
            else if(front == n -1)
            {
                front = 0;
            }
            else front++;
            
            return item;
        }
};


int main()
{
    Queue q(4);

    cout << q.dequeue() << endl;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << q.dequeue() << endl;

    return 0;
}