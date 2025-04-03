//implementation of queue
#include <iostream>
using namespace std;
class que1
{
    public:
        int *arr;
        int front,rear,size;
    public:
        que1(int size)
        {
            this->size=size;
            arr=new int[size];
            front=-1;
            rear=-1;
        }
        void enqueue(int value)
        {
            if(front==-1&&rear==-1)
            {
                front=0;
            }
            rear++;
            arr[rear]=value;
        }
        void dequeue()
        {
            if(front==-1)
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            arr[front];
            front++;
        }
        void getfront()
        {
            int value=arr[front];
            cout<<"Front element is :"<<value<<endl;
        }
        void display()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    que1 *q=new que1(4);
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->display();
    q->dequeue();
    q->display();
    q->getfront();
    return 0;
}