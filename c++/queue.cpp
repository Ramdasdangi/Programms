#include<iostream>
using namespace std;

class Queue {
private:
    static const int size = 100;
    int arr[size];
    int front;
    int rear;


public:
    Queue(){
        front=-1;
        rear= -1;
    }

    void enqueue(int item){
        if(rear == size-1){
            cout<<"Queue is full "<<endl;
            return;
        }
        if (front== -1) front = 0;
        rear++;
        arr[rear]=item;
        cout<<"enqueue : "<<item<<endl;
    }


    int dequeue(){
        if(is_empty()){
            cout<<"Queue is empty "<<endl;
            return -1;
        }

        int item = arr[front];
        front++;

        if(front >rear){
            front = rear= -1;
        }

        return item;
    }

    int frot(){
        if (is_empty()){
            cout<<"queue is empty \n";
            return -1;

        }
        return arr[front];
    }

    bool is_empty(){
        return front == -1 || front > rear;
    }

    void display (){
        if(is_empty()){
            cout<<"queue is empty \n";
        }

        cout<<"Queue : ";

        for(int i=front; i<=rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout<<"dequeued : "<<q.dequeue()<<endl;

    cout<<"front Element: "<<q.frot()<<endl;

    q.display();
    cout<<q.dequeue()<<endl;
    
    q.display();

    return 0;
}