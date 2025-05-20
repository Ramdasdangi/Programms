#include<iostream>
using namespace std;

class Queue{
private :
    static const int size = 50;
    int arr[size];
    int front;
    int rear;


public:
    Queue(){
        front= -1;
        rear= -1;
    }

    void enqueue(int item){
        if(rear ==size-1 ){
            cout<<"Queue is full \n";
            return;
        }
        if(front == -1) front=0;
            rear++;
            arr[rear]=item;
            cout<<"Queued or inserted Item : "<<item<<endl;
        

    }

    

    int de(){
        if(is_empty()){
            cout<<"Queue is empty : \n";
            return -1;
        }
        int item = arr[front];
        front++;

        if(front>rear){
            front = rear = -1;
        }
        return item ;
    }

    int f_item(){
        if(is_empty()){
            cout<<"Queue is empty : \n";
            return -1;
        }
        return arr[front];
    }
    bool is_empty(){
        return front == -1 || front>rear;
    }

    void display(){
        if(is_empty()){
            cout<<"Queue is empty : \n";
        }
        cout <<"Queue is ::  ";

        for (int i=front; i<=rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;

    // q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);

    cout<<"Enter first 5 item of Queue :  \n";
    for (int j=0; j<5 ; j++){
        int a;
        cout<<"Enter "<<j+1<<" item  :  "   ;
        cin>>a;
        q.enqueue(a);
    }

    q.display();
    cout<<"first item is : ";
    cout<<q.f_item()<<endl;

    cout<<"dequeued first three element : ";
    cout<<q.de()<<" ";
    cout<<q.de()<<" ";
    cout<<q.de()<<" \n";

    q.display();
    cout<<"first item is : ";
    cout<<q.f_item();

    return 0;


}