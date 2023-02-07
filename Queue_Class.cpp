#include <iostream>
using namespace std;


class Queue
{
    private:
        int front;
        int rear;
        int *array;
        int len;

    public:
        Queue(int len)
        {
            front = -1;
            rear = -1;
            array = (int*) malloc(len*sizeof(int));
            this->len = len;
        }

        void enqueue(int item)
        {
            if((front == 0 && rear == len - 1) || front == rear +1)
            {
                cout << "Overflow" << endl;
                return;
            }
            else if(front == -1)
            {
                front = 0;
                rear = 0;
            }
            else if(rear == len - 1)
            {
                rear = 0;
            }
            else rear++;

            array[rear] = item;
        }

        int dequeue()
        {
            int item = array[front];
            
            if(front == -1)
            {
                cout << "UnderFlow" << endl;
                return -1;
            }
            else if(front == rear)
            {
                front = -1;
                rear = -1;
            }
            else if(front == len-1)
            {
                front = 0;
            }
            else front++;

            return item;
        }

        void print()
        {
            if(front == -1)
            {
                cout << "Empty" << endl;
                return;
            }
            if (rear >= front)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << array[i] << " ";
                }
            }
            else
            {
                for (int i = front; i < len; i++)
                {
                    cout << array[i] << " ";
                }

                for (int i = 0; i <= rear; i++)
                {
                    cout << array[i] << " ";
                }
            }
            cout << endl;
        }

        ~Queue()
        {
            delete(array);
        }

};

int main()
{
    Queue q(3);

    q.print();

    q.enqueue(2);
    q.print();

    q.enqueue(4);
    q.print();

    q.enqueue(6);
    q.print();

    q.dequeue();
    q.print();

    q.enqueue(8);
    q.print();

    q.enqueue(4);
    q.print();

    return 0;
}