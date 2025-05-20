#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val)
         { data=val;
            next = NULL;
         } };

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(){
            head = NULL; }
        

    void insertAtBeginning(int val){
        Node* newNode = new Node(val);
        newNode->next = head ;
        head = newNode;
    }


    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if (!head){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next){
            temp= temp->next;
        }
        temp->next = newNode;
    
    }
    void deleteFromBeginning(){
        if(!head){
            cout<<"LISt is empty!"<<endl;
            return;
        }
    Node* temp = head ;
    head = head->next;
    delete temp;
    }

    void deleteFromEnd(){
        if (!head){
            cout<<"List is empty "<<endl;
            return ;
        }
        if (!head->next){
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next->next)
        {
            temp= temp->next;
        }
        delete temp->next;

        temp->next=NULL;
        }


    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" null"<<endl;

    }};

int main(){
        LinkedList list;
        cout<<"Linked List Implementation \n"<<endl;
        list.insertAtBeginning(1);
        list.insertAtEnd(10);
        list.insertAtEnd(12);
        list.insertAtEnd(14);

        list.insertAtBeginning(5);

        cout<<" after inseration \n";
        list.display();

        list.deleteFromBeginning();
        list.deleteFromBeginning();

        cout<<"After delete from beginning \n";
        list.display();

        list.insertAtBeginning(20);

        list.display();

        //list.deleteFromEnd();

        cout<<" after delete from end \n";
        list.display();
        return 0;
    }
