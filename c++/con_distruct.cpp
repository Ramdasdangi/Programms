#include<iostream>
#include<string>
using namespace std;

   //   ******  program using construct and distuct   ******

class Student{
    public:
        int id;
        string name;
        int marks;

    Student(){
        id=0;
        name=" ";
        marks=0;
    }

    void set_id(){
        cout<<"enter stu id : ";
        cin>>id;
    }
    void set_name(){
        cout<<"enter stu name : ";
        cin>>name;
    }
    void set_marks(){
        cout<<"enter stu marks : ";
        cin>>marks;
    }

    void display(){
        cout<<string(50 , '-')<<endl;
        cout<<"you enter following values : \n";
        cout<<"id : "<<id<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"marks : "<<marks<<endl;
    }
    ~ Student(){
        cout<<"programm is over : ";
    }};


// int main(){
//     Student st;
//     st.set_id();
//     st.set_name();
//     st.set_marks();
//     st.display();
// }


int main(){
    Student st;
    cout<<"enter stu id : ";
    cin>>st.id;
    cout<<"enter stu name : ";
    cin>>st.name;
    cout<<"enter stu marks : ";
    cin>>st.marks;
    st.display();

       return 0;
    }
